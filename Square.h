#include "LibForma.h"

class Square: public LibForma
{

   public:

        double width, height;

        Square(double, double);

        virtual double area();

};
