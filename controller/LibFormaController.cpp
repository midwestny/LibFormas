#include <iostream>
#include "LibForma.h"

int LibFormaController::main()
{
       extern LibForma* quadrado = new Square(15.5,20.5);
       extern LibForma* triangulo = new Triangle(10.5,15.5);
       extern LibForm* circulo = new Circle(10.5);
       std::cout<< "\nÁrea do quadrado : "<<quadrado->area()<<"\n";
       std::cout<< "Área do triangulo : "<<triangulo->area()<<"\n";
       std::cout<< "Área do circulo : "<<circulo->area()<<"\n";
       delete quadrado;
       delete triangulo;
       delete circulo;
       return 0;
       }
}
