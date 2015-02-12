#include "LibForma.h"
class Triangle: public LibForma
{

  public:

        double base, altura;

        Triangle(double, double);

        virtual double area();

};
