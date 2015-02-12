all: LibFormaController.exe



LibFormaController.exe:  /home/ubuntu/exercicioFormas/controller/LibFormaController.o

	g++ -o LibFormaController.exe /home/ubuntu/exercicioFormas/controller/LibFormaController.cpp -L/home/ubuntu/exercicioFormas/LibForma/ -lForma



LibFormaConntroller.o:  /home/ubuntu/exercicioFormas/controller/LibFormaControlller.cpp

	 g++ -c  /home/ubuntu/exercicioFormas/controller/LibFormaController.cpp -L/home/ubuntu/exercicioFormas/LibForma/ -lForma

     

clean:

	 rm  /home/ubuntu/exercicioFormas/controller/LibFormaController.o LibFormaController.exe
