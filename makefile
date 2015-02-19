all: LibFormaController.exe

LibFormaController.exe:  LibFormaController.o

	LD_LIBRARY_PATH=/home/ubuntu/exercicioFormas/
	export LD_LIBRARY_PATH=/home/ubuntu/exercicioFormas/
	g++ -Wall -I. -L. -lForma -o libFormaController.exe LibFormaController.o

LibFormaController.o: LibFormaController.cpp

	g++ -Wall -fPIC -c Square.cpp Triangle.cpp Circle.cpp LibForma.h
	g++ -Wall -fPIC -shared -o libForma.so Square.o Triangle.o Circle.o LibForma.h
	g++ -Wall -c LibFormaController.cpp

clean:

	rm LibFormaController.o LibFormaController.exe *.o libForma.so
