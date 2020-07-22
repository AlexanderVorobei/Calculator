#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape.h"

class Rectangle: public Shape
{
protected:
	float width, height;

public:
	Rectangle(float w, float h) : width(w), height(h)
	{

	}
	float Area() override;
	float Perimeter() override;
};






#endif RECTANGLE_H

