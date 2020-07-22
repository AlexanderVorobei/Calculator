#ifndef SQUARE_H
#define SQUARE_H
#include "Rectangle.h"

class Square : public Rectangle
{

public:
	Square(float sideLen) : Rectangle(sideLen, sideLen)
	{

	}

	float Diagonal();



};






#endif SQUARE_H

