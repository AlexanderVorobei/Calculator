#include <iostream>
#include <string>

#include "Logic.h"


using namespace std;


/*

��� �������� ������ ����� � ��������� ������� ������������ ���������� VS: Ctrl+Shift+A 

*/


int main()
{
 	setlocale(LC_ALL, "ru");

	
	Logic d(2.0, 4.0);

	cout << "�����������!" << endl;
	cout << "����������: "<< d.Print() << endl;
	cout << "�����: "<< d.Sum() << endl;
	cout << "�������: " << d.Subtraction() << endl;
	cout << "���������: " << d.Multiplication() << endl;
	cout << "�������: " << d.Division() << endl;
	cout << endl;


	return 0;

}