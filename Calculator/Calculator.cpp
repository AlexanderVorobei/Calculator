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
	float variable_1, variable_2;
	cout << "�����������!" << endl;
	cout << "������� ������ �������� ����������: ";
	cin >> variable_1;
	cout << endl << "������� ������ �������� ����������: ";
	cin >> variable_2;
	cout << endl;

	
	Logic d(variable_1, variable_2);
	
	d.Print();

	cout << "�����: "<< d.Sum() << endl;
	cout << "�������: " << d.Subtraction() << endl;
	cout << "���������: " << d.Multiplication() << endl;
	cout << "�������: " << d.Division() << endl;
	cout << endl;


	return 0;

}