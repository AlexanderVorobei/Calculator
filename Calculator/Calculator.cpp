#include <iostream>
#include <string>

#include "Logic.h"


using namespace std;


/*

Для создания нового файла в структуре проекта используется комбинация VS: Ctrl+Shift+A 

*/


int main()
{
 	setlocale(LC_ALL, "ru");
	float variable_1, variable_2;
	cout << "Калькулятор!" << endl;
	cout << "Введите первое значение переменной: ";
	cin >> variable_1;
	cout << endl << "Введите второе значение переменной: ";
	cin >> variable_2;
	cout << endl;

	
	Logic d(variable_1, variable_2);
	
	d.Print();

	cout << "Сумма: "<< d.Sum() << endl;
	cout << "Разница: " << d.Subtraction() << endl;
	cout << "Умножение: " << d.Multiplication() << endl;
	cout << "Деление: " << d.Division() << endl;
	cout << endl;


	return 0;

}