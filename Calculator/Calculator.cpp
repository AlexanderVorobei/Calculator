#include <iostream>
#include <string>

#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"
#include "Logic.h"


using namespace std;


/*

Для создания нового файла в структуре проекта используется комбинация VS: Ctrl+Shift+A 

*/


int main()
{
 	setlocale(LC_ALL, "ru");

	Circle c(13);
	Rectangle r(3, 5);
	Square s(7);
	Logic d(2.0, 4.0);


	cout << "Переменные: " << d.Print() << endl;
	cout << "Сумма: "<< d.Sum() << endl;
	cout << "Разница: " << d.Subtraction() << endl;
	cout << "Умножение: " << d.Multiplication() << endl;
	cout << "Деление: " << d.Division() << endl;
	cout << endl;



	cout << "Circle: " << endl;
	cout << "Area: "<< c.Area() << endl;
	cout << "Perimeter: "<< c.Perimeter() << endl;
	cout << endl;

	cout << "Rectangle: " << endl;
	cout << "Area: " << r.Area() << endl;
	cout << "Perimeter: " << r.Perimeter() << endl;
	cout << endl;

	cout << "Square: " << endl;
	cout << "Area: " << s.Area() << endl;
	cout << "Perimeter: " << s.Perimeter() << endl;
	cout << "Diagonal: " << s.Diagonal() << endl;
	cout << endl;


	return 0;

}