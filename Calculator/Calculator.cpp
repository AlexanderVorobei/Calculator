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

	
	Logic d(2.0, 4.0);

	cout << "Калькулятор!" << endl;
	cout << "Переменные: "<< d.Print() << endl;
	cout << "Сумма: "<< d.Sum() << endl;
	cout << "Разница: " << d.Subtraction() << endl;
	cout << "Умножение: " << d.Multiplication() << endl;
	cout << "Деление: " << d.Division() << endl;
	cout << endl;


	return 0;

}