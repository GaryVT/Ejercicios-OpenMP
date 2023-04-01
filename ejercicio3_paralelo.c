#include <omp.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(int argc, char* argv[])
{
	
	double time_spent = 0.0;
	clock_t begin = clock();
	int nthreads, tid;
	
	#pragma omp parallel private(nthreads, tid)
	{
		FILE * flujo = fopen("prueba.txt", "rb");
		char caracter;
		int contador=0;
		
		
		while(feof(flujo) == 0){//mientras no sea el final del archivo
			caracter = fgetc(flujo);
			printf("%c", caracter);	
			if(caracter == ' '){
				contador++;
			}		
		}	
		
			
		#pragma barrier

		fclose(flujo);
		printf("\nNumero de espacios: %d",contador);
		clock_t end = clock();
		time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
		printf("\nEl tiempo transcurrido es %f segundos", time_spent);
	}
}


