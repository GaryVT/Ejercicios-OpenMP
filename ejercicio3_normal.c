#include <stdio.h>
#include <stdbool.h>
#include <time.h>
int main()
{
	double time_spent = 0.0;
	clock_t begin = clock();
	FILE * flujo = fopen("prueba.txt", "rb");
	char caracter;
	int contador=0, i, j;
	while(feof(flujo) == 0){//mientras no sea el final del archivo
		caracter = fgetc(flujo);
		printf("%c", caracter);
		if(caracter == ' '){
			contador++;
		}
		
	}
	for(j=0; j<5; j++){
	printf("\nNumero de espacios: %d",contador);
	clock_t end = clock();
	time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
	for(i=0; i<4; i++){
		printf("\nEl tiempo transcurrido es %f segundos", time_spent);
		clock_t end = clock();
		time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
	}
}
	

}

