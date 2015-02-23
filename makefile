all: LibFormaController.exe

LibFormaController.exe:  LibFormaController.o

	 g++ -O1 -g -flto -Wall -Wextra -oLibFormaController.exe LibFormaController.o -L./ -lForma -Wl,-rpath=./ 

LibFormaController.o: LibFormaController.cpp

	g++ -Wall -fPIC -c Square.cpp Triangle.cpp Circle.cpp
	g++ -Wall -fPIC -shared -o libForma.so Square.o Triangle.o Circle.o LibForma.h
	g++ -Wall -c -L./ -lForma LibFormaController.cpp

clean:

	rm *.o LibFormaController.exe *.o libForma.so
