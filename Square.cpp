#include "Square.h"

Square::Square(double w,double h)
{
	width = w;
	height = h;
}

double Square::area()
{
	return width*height;
}
