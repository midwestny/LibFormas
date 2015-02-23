#include "LibForma.h"
class Triangle: public LibForma
{

  public:

        double base, altura;

        Triangle(double a, double b):base(a),altura(b){};
	virtual ~Triangle(){};
        double area();

};
