#include "LibForma.h"
#ifndef SQUARE_H
#define SQUARE_H
class Square: public LibForma
{

   public:

        double width, height;

        Square(double a, double b):width(a),height(b){};
	virtual ~Square(){};

        double area();

};
#endif
