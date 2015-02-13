all: LibFormaController.exe

LibFormaController.exe:  /home/ubuntu/exercicioFormas/controller/LibFormaController.o

	g++ -Wall -I/home/ubuntu/exercicioFormas/LibForma/ -L/home/ubuntu/exercicioFormas/LibForma/ -lForma -o /home/ubuntu/exercicioFormas/controller/LibFormaController.exe

LibFormaConntroller.o:  /home/ubuntu/exercicioFormas/controller/LibFormaControlller.cpp

	g++ -Wall -c  /home/ubuntu/exercicioFormas/controller/LibFormaController.cpp -I/home/ubuntu/exercicioFormas/LibForma/ -L/home/ubuntu/exercicioFormas/LibForma/ -lForma -o /home/ubuntu/exercicioFormas/controller/LibFormaController.o

clean:

	rm LibFormaController.o LibFormaController.exe
