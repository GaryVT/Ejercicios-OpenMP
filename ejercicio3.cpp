#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>

#include <time.h>

using namespace std;

int main(){
	
	double time_spent = 0.0;
	clock_t begin = clock();
	int nthreads, tid;
	
	ifstream archivo;
	string texto;
	int contador=0;
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
	clock_t end = clock();
	time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
	cout<<"El tiempo transcurrido es: "<<time_spent<<" segundos"<<endl;
	
	return 0;
}


