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

	double variable_1 = 0.0;
	double variable_2 = 0.0;
	double result = 0.0;
	char operand = '?';
	
	cout << "Калькулятор!\n" << endl;
	
	Logic logic;
	
	while (true)
	{
		cout << "Что посчитать?" << endl;
		cin >> variable_1 >> operand >> variable_2;

		if (operand == '/' && variable_2 == 0)
		{
			cout << "\nDivision by 0 exception!\n" << endl;
			continue;
		}
		else
		{
			result = logic.Calculate(variable_1, operand, variable_2);
		}
			
		cout << "\nResult is: " << result << endl << endl;
	}

	return 0;
}