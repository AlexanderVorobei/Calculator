#include <iostream>
#include "Logic.h"
using namespace std;

int main()
{
	double a, b;
	char oper;
	cout << "Hello! Please insert math operation: (a+b) " << endl;
	cin >> a >> oper >> b;
	cout << a << oper << b << "=";
	Logic calculator(a, b, oper);
	calculator.calculator(a, b, oper);
}