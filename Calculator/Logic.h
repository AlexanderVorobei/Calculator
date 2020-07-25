class Logic
{
protected:
	double a, b;
	char oper;

public:
	Logic(double a, double b, char oper) :a(a), b(b), oper(oper) {

	}
	void calculator(double a, double b, char oper);
};
