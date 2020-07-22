#include "Logic.h"
#include <iostream>
using namespace std;

float Logic::Sum()
{
	return variable_1 + variable_2;
}

float Logic::Subtraction()
{
	return variable_1 - variable_2;
}

float Logic::Multiplication()
{
	return variable_1 * variable_2;
}

float Logic::Division()
{
	return variable_1 / variable_2;
}

void Logic::Print()
{
	cout << "Переменные: " << variable_1 << " , " << variable_2;
	cout << endl;
}