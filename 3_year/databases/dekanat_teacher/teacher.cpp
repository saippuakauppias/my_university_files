// teacher.cpp: ������� ���� �������.

#include "stdafx.h"
#include "Form1.h"
#include "AuthForm.h"

using namespace teacher;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// ��������� ���������� �������� Windows XP �� �������� �����-���� ��������� ����������
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// �������� �������� ���� � ��� ������
	Application::Run(gcnew AuthForm());
	Application::Run(gcnew Form1());
	return 0;
}
