// bmp2arr.cpp: convert binarized 8bit BMP image to txt array

#include "stdafx.h"
#include "D:/Программирование/DigRec/FreeImage/projects/tpl/freeimage.h"
#pragma comment(lib, "D:/Программирование/DigRec/FreeImage/projects/tpl/freeimage.lib")
#include <stdio.h>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;

#define NBOOLMAX 7000

const int NumImgsInBd[10] = {5922, 6741, 5957, 6130, 5841, 5420, 5917, 6264, 5850, 5948};

bool bmparray[NBOOLMAX][28][28], AllFalseOrNot = 0,
	BoolTstImg[28][28];
BYTE icol = 0;
int x = 0, y = 0, ImgPerWdth = 0, NumImgs = 0,
	MinX = 0, MinY = 0;


char fname[] = "training_pictures/mnist_train0.bmp";
char fname2[] = "arrays/0.txt";
stringstream ArrayForPrint, PreStdOut;

void TopLeft(FIBITMAP *bmp, int x, int y)
{
	memset(BoolTstImg, 0, sizeof(BoolTstImg));

	MinX = x + 27;
	MinY = y + 27;

		for (int i = x; i < x + 28; ++i)
		{
			for (int j = y; j < y + 28; ++j)
			{
				icol = 0;
				FreeImage_GetPixelIndex(bmp, i, j, &icol);
				BoolTstImg[i][j] = (icol == 128);

				if ((icol == 128) && (i < MinX))
				{
					MinX = i;
				}

				if ((icol == 128) && (j < MinY))
				{
					MinY = j;
				}


				icol = 0;
				FreeImage_SetPixelIndex(bmp, i, j, &icol);

			}
		}

		icol = 128;

		int i2 = 0, j2 = 0;

		for (int i = x; i < x + 28 - (MinX - x); ++i)
		{
			j2 = 0;

			for (int j = y; j < y + 28 - (MinY - y); ++j)
			{
				if (BoolTstImg[i2 + MinX][j2 + MinY] == true)
				{
					icol = 128;

					FreeImage_SetPixelIndex(bmp, i, j, &icol);
				}
/*				else
				{
					icol = 0;
				}

*/

				j2++;
			}

			i2++;
		}
}

void TopLeft_All_in_Img(int Pic)
{
	sprintf(fname, "test_pcs/mnist_test%d.bmp", Pic);
	FIBITMAP *bmp = FreeImage_Load(FIF_BMP, fname, BMP_DEFAULT);

	for (int i = 0; i < FreeImage_GetWidth(bmp) / 28; ++i)
	{
		for (int j = 0; j < FreeImage_GetHeight(bmp) / 28; ++j)
		{
			TopLeft(bmp, i * 28, j * 28);
		}
	}

	if (!FreeImage_Save(FIF_BMP, bmp, fname, 0)) {
//		cout << fname << " - not saved!";
	}

	FreeImage_Unload(bmp);
}

int _tmain(int argc, _TCHAR* argv[])
{
// call this ONLY when linking with FreeImage as a static library (*.lib)
FreeImage_Initialise();

	for (int n = 0; n < 10; ++n)
	{

//		TopLeft_All_in_Img(n);

		sprintf(fname, "training_pictures/mnist_train%d.bmp", n);
		FIBITMAP *bmp = FreeImage_Load(FIF_BMP, fname, BMP_DEFAULT);

		sprintf(fname2, "arrays/%d.txt", n);
		freopen(fname2, "w", stdout);

		if (bmp)
		{
			memset(bmparray, 0, sizeof(bmparray));

			ImgPerWdth = FreeImage_GetHeight(bmp) / 28; // FreeImage_GetWidth(bmp) / 28;
			// !!!height!!! because rotate image

			for (int i = 0; i < FreeImage_GetWidth(bmp); ++i)
			{
				for (int j = 0; j < FreeImage_GetHeight(bmp); ++j)
				{
					icol = 0;

					if (FreeImage_GetPixelIndex(bmp, i, j, &icol))
					{
						x = 0;
						y = 0;

						if ((j % 28) != 0)	// 56 % 28  = 0
						{
							x = j - (j / 28) * 28;	// 58 - (58 / 28) * 28 = 58 - 2 * 28 = 58 - 56 = 2
						}

						if ((i % 28) != 0)
						{
							y = i - (i / 28) * 28;
						}

						// (58 / 28)  * (60 / 28) = 2 * 2 = 4
						// 2  * 3 == 3 * 2
						// ImgPerWdth * (i / 28) + (j / 28)
						bmparray[ImgPerWdth * (i / 28) + (j / 28)][y][x] = (icol == 128);

					}
					else
					{
						printf("%dx%d: error!", i, j);

						return 0;
					}
				}
			}
		}


// print NOT formatted array
		for (int i = 0; i < NBOOLMAX; ++i)
		{
			AllFalseOrNot = 0;
			ArrayForPrint.str("");

			for (int j = 0; j < 28; ++j)
			{
				for (int k = 0; k < 28; ++k)
				{
					if(bmparray[i][j][k] == 1)
					{
						AllFalseOrNot = 1;
					}
					ArrayForPrint << bmparray[i][j][k];
				}
				ArrayForPrint << endl;
			}

			ArrayForPrint << endl;

			if (AllFalseOrNot == 1)
			{
				printf("%s", ArrayForPrint.str().c_str());
			}
		}


/*
// print formatted array in file
		PreStdOut.str("");
		PreStdOut << "bool TrainImg[    ][28][28] = {\n";
		NumImgs = 0;

		for (int i = 0; i < NBOOLMAX; ++i)
		{
			AllFalseOrNot = 0;
			ArrayForPrint.str("");
			ArrayForPrint << "{\n";

			for (int j  = 0; j < 28; ++j)
			{
				ArrayForPrint << "	{";
				for (int k = 0; k < 28; ++k)
				{
					if(bmparray[i][j][k] == 1)
					{
						AllFalseOrNot = 1;
					}
					ArrayForPrint << bmparray[i][j][k] << ",";
				}
				ArrayForPrint.seekp((int)ArrayForPrint.tellp() - 1);
				ArrayForPrint << "},\n";
			}


			ArrayForPrint.seekp((int)ArrayForPrint.tellp() - 2);
			ArrayForPrint << "\n";

			ArrayForPrint << "},\n\n";

			if (AllFalseOrNot == 1)
			{
				PreStdOut << ArrayForPrint.str();
				NumImgs++;
			}

		}

		PreStdOut << "};";

		PreStdOut.seekp(14); // this is magic const
		PreStdOut << NumImgs;


		printf("%s", PreStdOut.str().c_str());

*/

		FreeImage_Unload(bmp);

	}

// call this ONLY when linking with FreeImage as a static library (*.lib)
FreeImage_DeInitialise();


//	getchar();
	return 0;
}
