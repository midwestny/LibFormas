#include <iostream>
#include "LibForma.h"
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"

int main()
{
	LibForma* quadrado = new Square(15.5,20.5);
	LibForma* triangulo = new Triangle(10.5,15.5);
	LibForma* circulo = new Circle(10.5);
	std::cout<< "\nÁrea do quadrado : "<<quadrado->area()<<"\n";
	std::cout<< "Área do triangulo : "<<triangulo->area()<<"\n";
	std::cout<< "Área do circulo : "<<circulo->area()<<"\n";
	return 0;
}
