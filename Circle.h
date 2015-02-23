#include "LibForma.h"
class Circle: public LibForma
{

  public:

        double raio;

        Circle(double a):raio(a){};
	virtual ~Circle(){};
        double area();

};
