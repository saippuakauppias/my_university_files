//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include <stdio.h>
#include <time.h>
#include <iostream>

#include "resources/FreeImage.h"
#pragma comment(lib, "resources/FreeImage.lib")

using namespace std;

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
struct vizual
{
        int Num,        // обрабатываемая цифра
            NInBD,      // изображение в базе
            x,
            y,
            search[10]; // массив состояний

};

// vars
const int NumImgsInBd[10] = {5922, 6741, 5957, 6130, 5841, 5420, 5917, 6264, 5850, 5948};
int NumX = 0, NumY = 0, NumbImg = 0, RndPic = 0, RndX = 0, RndY = 0, speed = 1000, Recoged = 0,
    MinX = 0, MinY = 0, MaxX = 0, MaxY = 0;

bool IsNewImg = false, DigRecoged = false, AutoStep = false;
bool BdImgs[10][6745][28][28], BoolTstImg[28][28], BoolTrnImg[28][28], BoolTmpImg[28][28];

int Search[10];

char PreobrImgs[10][6745][14][14], ChrTstImg[14][14], ChrTrnImg[14][14];
char fname[] = "test_pcs/mnist_test3.bmp", fname2[] = "arrays/0.txt", OneSymb = 0;

BYTE icol = 0;
vizual states[2];
//---------------------------------------------------------------------------
void Read_Mtx_From_Files()
{
	for (int i = 0; i < 10; ++i)
	{
		NumX = 0;
		NumY = 0;
		NumbImg = 0;
		IsNewImg = false;
		sprintf(fname2, "arrays/%d.txt", i);
		FILE *fhandle = fopen(fname2, "r");


		while(!feof(fhandle))
		{
			OneSymb = fgetc(fhandle);

			if (OneSymb == '\n')
			{
				if (IsNewImg == true)
				{
					NumbImg++;
					NumY = 0;
					NumX = 0;
					IsNewImg = false;
				}
				else
				{
					NumY++;
					NumX = 0;
					IsNewImg = true;
				}
			}
			else
			{
				IsNewImg = false;
				BdImgs[i][NumbImg][NumY][NumX] = !(OneSymb == '0');
				NumX++;
			}
/*
// if читает лишка данных
			if (NumbImg >= 6745)
			{
				break;
			}
*/
		}

		fclose(fhandle);
	}
/*
	for(int i = 0; i < 10; ++i)
	{
		for (int j = 0; j < 28; ++j)
		{
			for (int k = 0; k < 28; ++k)
			{
				cout << (int)BdImgs[i][NumImgsInBd[i]][j][k];
			}
			cout << endl;
		}
		cout << endl;
		getchar();
	}
*/
}

void Preobr_Mtx_To_14x14()
{
	for (int BImg = 0; BImg < 10; ++BImg)
	{
		for (int NumImg = 0; NumImg <= NumImgsInBd[BImg]; ++NumImg)
		{
			for (int y = 0; y < 28; ++y, ++y)
			{
				for (int x  = 0; x < 28; ++x, ++x)
				{
					PreobrImgs[BImg][NumImg][y/2][x/2] =
						BdImgs[BImg][NumImg][y][x]		* 1 +
						BdImgs[BImg][NumImg][y][x+1]	* 2 +
						BdImgs[BImg][NumImg][y+1][x]	* 4 +
						BdImgs[BImg][NumImg][y+1][x+1]	* 8;
				}
			}
		}
	}

/*
	for(int i = 0; i < 10; ++i)
	{
		for (int j = 0; j < 14; ++j)
		{
			for (int k = 0; k < 14; ++k)
			{
				cout << (int)PreobrImgs[i][NumImgsInBd[i]][j][k];
			}
			cout << endl;
		}
		cout << endl;
		getchar();
	}
*/
}

void Read_TstImg_to_Mtx()
{
	RndPic = rand() % 10;
	sprintf(fname, "test_pcs/mnist_test%d.bmp", RndPic);
	FIBITMAP *bmp = FreeImage_Load(FIF_BMP, fname, BMP_DEFAULT);

	if (bmp)
	{
		RndY = (rand() % ((FreeImage_GetWidth(bmp) / 28) - 1)) * 28;
		RndX = (rand() % ((FreeImage_GetHeight(bmp) / 28) - 1)) * 28;

		for (int i = RndY; i < RndY + 28; ++i)
		{
			for (int j = RndX; j < RndX + 28; ++j)
			{
				icol = 0;
				FreeImage_GetPixelIndex(bmp, i, j, &icol);
				BoolTstImg[i - RndY][j - RndX] = (icol == 128);

//				cout <<  (icol == 128);
			}
//			cout << endl;
		}
	} else {
//		cout << "Image not loaded!";
	}
	FreeImage_Unload(bmp);
}

void Read_Digitbmp_to_Mtx()
{
	FIBITMAP *bmp = FreeImage_Load(FIF_BMP, "test_pcs/digit.bmp", BMP_DEFAULT);

	if (bmp)
	{
		for (int i = 0; i < 28; ++i)
		{
			for (int j = 0; j < 28; ++j)
			{
				icol = 0;
				FreeImage_GetPixelIndex(bmp, i, j, &icol);
				BoolTstImg[i][j] = (icol == 128);

			}
		}
	} else {
//  		cout << "Image not loaded!";
	}
	FreeImage_Unload(bmp);
}

void Centnered_Img()
{
	MinX = 27;
	MinY = 27;
        MaxX = 0;
        MaxY = 0;

	for (int i = 0; i < 28; ++i)
	{
		for (int j = 0; j < 28; ++j)
		{
                        if (BoolTstImg[i][j] == true)
                        {
				if (i < MinX)
				{
					MinX = i;
				}

				if (j < MinY)
				{
					MinY = j;
				}

				if (i > MaxX)
				{
                                        MaxX = i;
				}

				if (j > MaxY)
				{
                                        MaxY = j;
				}
                        }

                        BoolTmpImg[i][j] = BoolTstImg[i][j];
                        BoolTstImg[i][j] = false;
		}
	}


	int i2 = 0, j2 = 0, x0 = 0, y0 = 0;

        x0 = ((28 - MaxX) + MinX) / 2;
        y0 = ((28 - MaxY) + MinY) / 2;

	for (int i = x0; i < 28; ++i)
	{
		j2 = 0;
		for (int j = y0; j < 28; ++j)
		{
			if (BoolTmpImg[i2 + MinX][j2 + MinY] == true)
			{
                                BoolTstImg[i][j] = true;
			}
			j2++;
		}

		i2++;
	}
}

void Center_All_Imgs()
{
        for (int n = 0; n < 10; ++n)
        {
                for (int i = 0; i < NumImgsInBd[n]; ++i)
                {
                        memset(BoolTstImg, 0, sizeof(BoolTstImg));
                        memset(BoolTmpImg, 0, sizeof(BoolTmpImg));

                        memmove(BoolTstImg, BdImgs[n][i], sizeof(BdImgs[n][i]));
                        Centnered_Img();
                        memmove(BdImgs[n][i], BoolTstImg, sizeof(BoolTstImg));
                }
        }
}

void Preobr_OneImg_To_14x14()
{
	for (int y = 0; y < 28; ++y, ++y)
	{
		for (int x = 0; x < 28; ++x, ++x)
		{
			ChrTstImg[y/2][x/2] =
				BoolTstImg[y][x]		* 1 +
				BoolTstImg[y][x+1]		* 2 +
				BoolTstImg[y+1][x]		* 4 +
				BoolTstImg[y+1][x+1]	* 8;
		}
	}
}

int Recog_Image(bool PrintRes = true)
{
        memset(Search, 0, sizeof(Search));

	for (int Imgs = 0; Imgs < 10; ++Imgs)
	{
		for (int Pcs = 0; Pcs < NumImgsInBd[Imgs]; ++Pcs)
		{
			for(int y = 0; y < 14; ++y)
			{
				for (int x = 0; x < 14; ++x)
				{
					if (ChrTstImg[y][x] == 0)
					{
						continue;
					}

					if (PreobrImgs[Imgs][Pcs][y][x] == ChrTstImg[y][x])
					{
						Search[Imgs]++;
					}

                                        Application->ProcessMessages();
				}
			}
		}
	}

	int max = -1, indmax = -1;

	for (int i = 0; i < 10; ++i)
	{
		if (Search[i] > max)
		{
			max = Search[i];
			indmax = i;
		}

                if (PrintRes == true)
                {
                        Form1->Memo1->Lines->Add(IntToStr(i) + ": " + IntToStr(Search[i]));
                }

                states[2].search[i] = Search[i];
	}

        states[2].Num = 9;
        states[2].NInBD = NumImgsInBd[9];
        states[2].x = states[2].y = 14;

	return indmax;
}

void UnitTest()
{
	int percent = 0;

        Form1->Memo1->Lines->Clear();

	for (int i = 0; i < 100; ++i)
	{
		memset(BoolTstImg, 0, sizeof(BoolTstImg));
		memset(ChrTstImg, 0, sizeof(ChrTstImg));
//		memset(Search, 0, sizeof(Search));

		Read_TstImg_to_Mtx();
		Preobr_OneImg_To_14x14();

                int indmax = Recog_Image(false);

                Form1->Memo1->Lines->Add("Загр:" + IntToStr(RndPic) + ", Расп:" + IntToStr(indmax));

		if (RndPic == indmax)
		{
			percent++;
		}
	}

        Form1->Memo1->Lines->Add("");
        Form1->Memo1->Lines->Add("Errors: " + IntToStr(100 - percent));
}

bool Compare_Viz()
{
        return (states[1].Num <= 0) && (states[1].NInBD <= 0) &&
               (states[1].x <= 2) && (states[1].y <= 0);
}

void Fill_Trn_Mtx()
{
       for (int i = 0; i < 28; ++i, ++i)
       {
               for (int j = 0; j < 28; ++j, ++j)
               {
                       BoolTrnImg[i][j] = (PreobrImgs[states[1].Num][states[1].NInBD][i/2][j/2] & 1) != 0;
                       BoolTrnImg[i][j+1] = (PreobrImgs[states[1].Num][states[1].NInBD][i/2][j/2] & 2) != 0;
                       BoolTrnImg[i+1][j] = (PreobrImgs[states[1].Num][states[1].NInBD][i/2][j/2] & 4) != 0;
                       BoolTrnImg[i+1][j+1] = (PreobrImgs[states[1].Num][states[1].NInBD][i/2][j/2] & 8) != 0;
               }
       }
}

void __fastcall TForm1::FormCreate(TObject *Sender)
{
        // call this ONLY when linking with FreeImage as a static library (*.lib)
        FreeImage_Initialise();

        srand(time(NULL));
        memset(BdImgs, 0, sizeof(BdImgs));
        memset(PreobrImgs, 0, sizeof(PreobrImgs));

        memset(states, 0, sizeof(states));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
        // call this ONLY when linking with FreeImage as a static library (*.lib)
        FreeImage_DeInitialise();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::BitBtn1Click(TObject *Sender)
{
	Read_Mtx_From_Files();
        // костыль :О
        Center_All_Imgs();

	Preobr_Mtx_To_14x14();
        Form1->Label1->Caption = "База загружена";
        Form1->BitBtn1->Enabled = false;
        Form1->BitBtn2->Enabled = true;
        Form1->BitBtn5->Enabled = true;
        Form1->BitBtn13->Enabled = true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::BitBtn2Click(TObject *Sender)
{
        memset(BoolTstImg, 0, sizeof(BoolTstImg));
        memset(ChrTstImg, 0, sizeof(ChrTstImg));
        memset(Search, 0, sizeof(Search));
        memset(states, 0, sizeof(states));

	Read_TstImg_to_Mtx();
        Centnered_Img();
        Preobr_OneImg_To_14x14();

        Form1->Label2->Caption = "Загружена цифра " + IntToStr(RndPic);
        Form1->Label3->Caption = "Цифра не распознана!";
        StringGrid1->Repaint();
        StringGrid2->Repaint();

        DigRecoged = false;

        if (Form1->BitBtn1->Enabled == false)
        {
                Form1->BitBtn4->Enabled = false;
                Form1->BitBtn6->Enabled = true;
                Form1->BitBtn7->Enabled = true;
                Form1->BitBtn8->Enabled = true;
                Form1->BitBtn11->Enabled = true;
                Form1->BitBtn12->Enabled = true;
                Form1->BitBtn3->Enabled = true;
                Form1->BitBtn5->Enabled = true;
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::StringGrid1SelectCell(TObject *Sender, int ACol,
      int ARow, bool &CanSelect)
{
        CanSelect = false;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::BitBtn3Click(TObject *Sender)
{
        Form1->Memo1->Lines->Clear();
        Form1->Memo1->Lines->Add("Вероятность:");

        int Recoged = Recog_Image();

        states[1].Num = Recoged;
        states[1].NInBD = rand() % NumImgsInBd[states[1].Num];
        states[1].x = 26;
        states[1].y = 26;

        Fill_Trn_Mtx();

        Form1->Label3->Caption = "Распознанная цифра: " + IntToStr(Recoged);

        Form1->StringGrid2->Repaint();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn5Click(TObject *Sender)
{
        Form1->Label2->Caption = "Цифра не загружена!";
        UnitTest();
        Form1->Label3->Caption = "Все цифры распознаны";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::StringGrid1DrawCell(TObject *Sender, int ACol,
      int ARow, TRect &Rect, TGridDrawState State)
{
        if(BoolTstImg[ARow][ACol] == 0)
        {
                StringGrid1->Canvas->Brush->Color = clWhite;
        }
        else
        {
                StringGrid1->Canvas->Brush->Color = clBlack;
        }

        if (
            ((states[1].x == ARow) && (states[1].y == ACol)) ||
            ((states[1].x+1 == ARow) && (states[1].y == ACol)) ||
            ((states[1].x == ARow) && (states[1].y+1 == ACol)) ||
            ((states[1].x+1 == ARow) && (states[1].y+1 == ACol))
            )
        {
                if (StringGrid1->Canvas->Brush->Color == clBlack)
                {
                        StringGrid1->Canvas->Brush->Color = clRed;
                }
                else
                {
                        StringGrid1->Canvas->Brush->Color = clBlue;
                }
        }


        StringGrid1->Canvas->FillRect(Rect);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::BitBtn6Click(TObject *Sender)
{
/*
0 0
0 0

[0][0] = (sost & 1) != 0;
                 2;
                 4
                 8
*/
        Form1->Label7->Caption = "";
        Form1->BitBtn4->Enabled = true;

        Application->ProcessMessages();

        if (DigRecoged == false)
        {
                DigRecoged = true;
                Recoged = Recog_Image();
                Fill_Trn_Mtx();

                Form1->Label7->Caption = Form1->Label7->Caption +
                        "Распознавание начато. Матрица с изображениям для сверки с текущей цифрой создана. ";
                Form1->BitBtn4->Enabled = true;
        }



        if ((states[1].x == 26) && (states[1].y == 26))
        {
                Form1->Label7->Caption = Form1->Label7->Caption +
                        "Сравнение с " + IntToStr(states[1].NInBD + 1) + " образом цифры " + IntToStr(states[1].Num) +
                                         " завершено. Переходим к следующему образу. ";
                states[1].NInBD++;
                states[1].x = 0;
                states[1].y = 0;

                Fill_Trn_Mtx();
        }
        else
        {
                if (states[1].x == 26)
                {
                        states[1].y += 2;
                        states[1].x = 0;
                }
                else
                {
                        states[1].x += 2;
                }
        }


        if (states[1].NInBD > NumImgsInBd[states[1].Num])
        {
                Fill_Trn_Mtx();

                Form1->Label7->Caption = Form1->Label7->Caption +
                        "Сравнение с цифрой " + IntToStr(states[1].Num) + "завершено. Переходим к следующей цифре. ";
                states[1].Num++;
                states[1].NInBD = 0;
        }

        if (states[1].Num == 9)
        {
                Form1->Label7->Caption = Form1->Label7->Caption +
                        "Работа алгоритма завершена! Распознанное изображение: " + IntToStr(Recoged) + ".";
                Form1->BitBtn6->Enabled = false;
                Form1->BitBtn11->Enabled = false;
                Form1->BitBtn12->Enabled = false;
        }
        else
        {
                Form1->Label7->Caption = Form1->Label7->Caption +
                        "Сравниваем числа в свёрнутых подматрицах. У изображения для распознавания оно равно " +
                                IntToStr(ChrTstImg[states[1].x/2][states[1].y/2]) + ", а у текущего образа оно равно " +
                                IntToStr(PreobrImgs[states[1].Num][states[1].NInBD][states[1].x/2][states[1].y/2]);


                if (ChrTstImg[states[1].x/2][states[1].y/2] == 0)
                {
                        Form1->Label7->Caption = Form1->Label7->Caption +
                                " - у изображения для распознавания число равно 0, поэтому пропускаем шаг, ничего не добавляем в вероятность. ";
                }
                else if (ChrTstImg[states[1].x/2][states[1].y/2] == PreobrImgs[states[1].Num][states[1].NInBD][states[1].x/2][states[1].y/2])
                {
                        Form1->Label7->Caption = Form1->Label7->Caption +
                                " - в вероятность цифры " + IntToStr(states[1].Num) + " прибавляем 1. ";
                        states[1].search[states[1].Num]++;
                } else
                {
                        Form1->Label7->Caption = Form1->Label7->Caption +
                                " - числа различные, ничего не добавляем в вероятность. ";
                }
        }

        Form1->Memo1->Lines->Clear();
        Form1->Memo1->Lines->Add("Вероятность:");


        for (int i = 0; i < 10; ++i)
        {
                Form1->Memo1->Lines->Add(IntToStr(i) + ": " + IntToStr(states[1].search[i]));
        }

        Form1->StringGrid1->Repaint();
        Form1->StringGrid2->Repaint();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::StringGrid2DrawCell(TObject *Sender, int ACol,
      int ARow, TRect &Rect, TGridDrawState State)
{
        if(BoolTrnImg[ARow][ACol] == 0)
        {
                StringGrid2->Canvas->Brush->Color = clWhite;
        }
        else
        {
                StringGrid2->Canvas->Brush->Color = clBlack;
        }

        if (
            ((states[1].x == ARow) && (states[1].y == ACol)) ||
            ((states[1].x+1 == ARow) && (states[1].y == ACol)) ||
            ((states[1].x == ARow) && (states[1].y+1 == ACol)) ||
            ((states[1].x+1 == ARow) && (states[1].y+1 == ACol))
            )
        {
                if (StringGrid2->Canvas->Brush->Color == clBlack)
                {
                        StringGrid2->Canvas->Brush->Color = clRed;
                }
                else
                {
                        StringGrid2->Canvas->Brush->Color = clBlue;
                }
        }

        StringGrid2->Canvas->FillRect(Rect);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn8Click(TObject *Sender)
{

        memset(states, 0, sizeof(states));

        if (DigRecoged == false)
        {
                Recoged = Recog_Image();
        }

        DigRecoged = false;

        states[1].Num = 0;
        states[1].NInBD = 0;
        states[1].x = 0;
        states[1].y = 0;

        Fill_Trn_Mtx();

        Form1->StringGrid1->Repaint();
        Form1->StringGrid2->Repaint();

        Form1->BitBtn4->Enabled = false;
        Form1->BitBtn6->Enabled = true;
        Form1->BitBtn7->Enabled = true;
        Form1->BitBtn11->Enabled = true;
        Form1->BitBtn12->Enabled = true;

        Form1->Label7->Caption = "Распознавание начато. Матрица с изображениям для сверки с текущей цифрой создана. ";


        Form1->Memo1->Lines->Clear();
        Form1->Memo1->Lines->Add("Вероятность:");


        for (int i = 0; i < 10; ++i)
        {
                Form1->Memo1->Lines->Add(IntToStr(i) + ": " + IntToStr(states[1].search[i]));
        }
}
//---------------------------------------------------------------------------




void __fastcall TForm1::BitBtn4Click(TObject *Sender)
{
        Form1->Label7->Caption = "";

        Form1->BitBtn6->Enabled = true;
        Form1->BitBtn7->Enabled = true;
        Form1->BitBtn11->Enabled = true;
        Form1->BitBtn12->Enabled = true;


        Application->ProcessMessages();

        if ((states[1].Num == 0) && (states[1].NInBD == 0) && (states[1].x == 0) && (states[1].y == 0))
        {
                Form1->BitBtn4->Enabled = false;

                DigRecoged = true;
                Recoged = Recog_Image();

                Fill_Trn_Mtx();

                Form1->Label7->Caption = Form1->Label7->Caption +
                        "Распознавание начато. Матрица с изображениям для сверки с текущей цифрой создана. ";
        }
        else
        {
                if ((states[1].x == 0) && (states[1].y == 0) && (states[1].Num >= 0)/* && (states[1].NInBD > 0)*/)
                {
                        if ((states[1].Num > 0) && (states[1].NInBD == 0))
                        {
                                states[1].Num--;
                                states[1].NInBD = NumImgsInBd[states[1].Num];

                                states[1].x = 26;
                                states[1].y = 26;

                                Fill_Trn_Mtx();

                                Form1->Label7->Caption = Form1->Label7->Caption +
                                        "Вернулись к цифре " + IntToStr(states[1].Num) + " и её " + IntToStr(states[1].NInBD) + " образу. ";
                        }
                        else
                        {
                                states[1].NInBD--;
                                states[1].x = 26;
                                states[1].y = 26;

                                Fill_Trn_Mtx();

                                Form1->Label7->Caption = Form1->Label7->Caption +
                                        "Вернулись к образу " + IntToStr(states[1].NInBD) + ". ";
                        }

                }
                else
                {
                        if (states[1].x == 0)
                        {
                                states[1].y -= 2;
                                states[1].x = 26;
                        }
                        else
                        {
                                states[1].x -= 2;
                        }

                        Form1->Label7->Caption = Form1->Label7->Caption +
                                "Сравниваем числа в свёрнутых подматрицах. У изображения для распознавания оно равно " +
                                        IntToStr(ChrTstImg[states[1].x/2][states[1].y/2]) + ", а у текущего образа оно равно " +
                                        IntToStr(PreobrImgs[states[1].Num][states[1].NInBD][states[1].x/2][states[1].y/2]);


                        if (ChrTstImg[states[1].x/2][states[1].y/2] == 0)
                        {
                                Form1->Label7->Caption = Form1->Label7->Caption +
                                        " - у изображения для распознавания число равно 0, поэтому пропускаем шаг, ничего не вычитаем из вероятности. ";
                        }
                        else if (ChrTstImg[states[1].x/2][states[1].y/2] == PreobrImgs[states[1].Num][states[1].NInBD][states[1].x/2][states[1].y/2])
                        {
                                Form1->Label7->Caption = Form1->Label7->Caption +
                                        " - от вероятности цифры " + IntToStr(states[1].Num) + " вычитаем 1. ";
                                states[1].search[states[1].Num]--;
                        } else
                        {
                                Form1->Label7->Caption = Form1->Label7->Caption +
                                        " - числа различные, ничего не вычитаем из вероятности. ";
                        }
                }
        }


        Form1->Memo1->Lines->Clear();
        Form1->Memo1->Lines->Add("Вероятность:");


        for (int i = 0; i < 10; ++i)
        {
                Form1->Memo1->Lines->Add(IntToStr(i) + ": " + IntToStr(states[1].search[i]));
        }

        Form1->StringGrid1->Repaint();
        Form1->StringGrid2->Repaint();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::BitBtn9Click(TObject *Sender)
{
        switch (speed)
        {
          case 50:
                speed = 1;
          break;

          case 500:
                speed = 50;
          break;

          case 1000:
                speed = 500;
          break;

          case 1500:
                speed = 1000;
          break;

          case 2500:
                speed = 1500;
          break;

          case 5000:
                speed = 2500;
          break;
        }

        Form1->Timer1->Interval = speed;
        Form1->Label5->Caption = "Скорость: " + IntToStr(speed) + "мс";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn10Click(TObject *Sender)
{
        switch (speed)
        {
          case 1:
                speed = 50;
          break;

          case 50:
                speed = 500;
          break;

          case 500:
                speed = 1000;
          break;

          case 1000:
                speed = 1500;
          break;

          case 1500:
                speed = 2500;
          break;

          case 2500:
                speed = 5000;
          break;

        }

        Form1->Timer1->Interval = speed;
        Form1->Label5->Caption = "Скорость: " + IntToStr(speed) + "мс";
}
//---------------------------------------------------------------------------




void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
        BitBtn6Click(Sender);

}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn11Click(TObject *Sender)
{
        if ((states[1].Num != 9) && (states[1].NInBD != NumImgsInBd[states[1].Num]))
        {
                Form1->Timer1->Enabled = true;
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn12Click(TObject *Sender)
{
        Form1->Timer1->Enabled = false;
}
//---------------------------------------------------------------------------



void __fastcall TForm1::BitBtn7Click(TObject *Sender)
{
        if (DigRecoged == false)
        {
                DigRecoged = true;
                Recoged = Recog_Image();
        }

        states[1].Num = Recoged;
        states[1].NInBD = rand() % NumImgsInBd[states[1].Num];
        states[1].x = 26;
        states[1].y = 26;

        Fill_Trn_Mtx();

        Form1->Memo1->Lines->Clear();
        Form1->Memo1->Lines->Add("Вероятность:");


        for (int i = 0; i < 10; ++i)
        {
                states[1].search[i] = states[2].search[i];
                Form1->Memo1->Lines->Add(IntToStr(i) + ": " + IntToStr(states[1].search[i]));
        }

        Form1->BitBtn6->Enabled = false;
        Form1->BitBtn4->Enabled = true;
        Form1->BitBtn11->Enabled = false;
        Form1->BitBtn12->Enabled = false;
        Form1->BitBtn7->Enabled = false;

        Form1->StringGrid1->Repaint();
        Form1->StringGrid2->Repaint();

        Form1->Label7->Caption = "Работа алгоритма завершена! Распознанное изображение: " + IntToStr(Recoged) + ". ";

}
//---------------------------------------------------------------------------






void __fastcall TForm1::BitBtn13Click(TObject *Sender)
{
        memset(BoolTstImg, 0, sizeof(BoolTstImg));
        memset(BoolTmpImg, 0, sizeof(BoolTmpImg));
        memset(ChrTstImg, 0, sizeof(ChrTstImg));
        memset(Search, 0, sizeof(Search));
        memset(states, 0, sizeof(states));

	Read_Digitbmp_to_Mtx();
        Centnered_Img();
        Preobr_OneImg_To_14x14();

        Form1->Label2->Caption = "Загружен digit.bmp";
        Form1->Label3->Caption = "Цифра не распознана!";
        StringGrid1->Repaint();
        StringGrid2->Repaint();

        DigRecoged = false;

        if (Form1->BitBtn1->Enabled == false)
        {
                Form1->BitBtn4->Enabled = false;
                Form1->BitBtn6->Enabled = true;
                Form1->BitBtn7->Enabled = true;
                Form1->BitBtn8->Enabled = true;
                Form1->BitBtn11->Enabled = true;
                Form1->BitBtn12->Enabled = true;
                Form1->BitBtn3->Enabled = true;
                Form1->BitBtn5->Enabled = true;
        }
}
//---------------------------------------------------------------------------





