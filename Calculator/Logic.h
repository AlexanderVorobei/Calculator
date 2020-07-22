
#ifndef LOGIC_H
#define LOGIC_H

class Logic
{

protected:
	float variable_1;
	float variable_2;

public:
	Logic(float variable_1, float variable_2) : variable_1(variable_1), variable_2(variable_2)
	{

	}


	float Sum();
	float Subtraction();
	float Multiplication();
	float Division();
	float Print();

};






#endif LOGIC_H

