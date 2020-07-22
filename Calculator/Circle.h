#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle: public Shape
{

protected:
	float radius;

public:
	Circle(float r) : radius(r)
	{

	}
	float Area() override;
	float Perimeter() override;

};






#endif CIRCLE_H

