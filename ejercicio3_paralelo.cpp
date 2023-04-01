#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>

#include <omp.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>


using namespace std;

int main(int argc, char* argv[])
{
	int nthreads, tid;
	int contador=0;
	ifstream archivo;
	string texto;
	archivo.open("prueba.txt", ios::in);//abrir archivo en lectura
			while(!archivo.eof()){//mientras no sea el final del archivo
			getline(archivo,texto);
			cout<<texto<<endl;
		}

	
	
	


		//getline(archivo,texto);
		for(int i=0;i<texto.size();i++){
			if(texto[i] ==' '){
				contador++;
			}
		}	
	

	cout<<"Numero de espacios: "<<contador<<endl;
	archivo.close();

}


