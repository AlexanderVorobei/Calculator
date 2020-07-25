#include "Logic.h"
#include "iostream"
using namespace std;

void Logic::calculator(double a, double b, char oper) {
	if (oper == '+') {
		cout << a + b << endl;
	}
	else if (oper == '-') {
		cout << a - b << endl;
	}
	else if (oper == '*') {
		cout << a * b << endl;
	}
	else if (oper == '/') {
		cout << a / b << endl;
	}
	else {
		cout << "Wrong data!" << endl;
	}
}
