all: LibFormaController.exe



LibFormaController.exe: LibFormaController.o

	g++ -o LibFormaController.exe LibFormaController.cpp -L/home/ubuntu/exercicioFormas/LibForma/ -lForma



LibFormaConntroller.o: LibFormaControlller.cpp

	 g++ -c LibFormaController.cpp -L/home/ubuntu/exercicioFormas/LibForma/ -lForma

     

clean:

	 rm LibFormaController.o LibFormaController.exe
