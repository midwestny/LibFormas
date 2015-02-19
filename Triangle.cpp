#include "Triangle.h"

Triangle::Triangle(double a,double b)
{
	altura = a;
	base = b;
}

double Triangle::area()
{
	return 0.5*base*altura;
}
