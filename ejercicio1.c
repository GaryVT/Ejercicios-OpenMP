#include <omp.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

long num_steps=100000; 
double step=1.0/100000.0; 

int main()
{
	double time_spent = 0.0;
	clock_t begin = clock();

	int i;
	double x, pi_1, sum =0.0;	
	for(i=0; i<num_steps;i++){
		x=(i-0.5)*step;
		sum += 4.0/(1.0+x*x);
	}
	pi_1 = step*sum;
		
	clock_t end = clock();
	time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
	printf("\nEl tiempo transcurrido es %f segundos", time_spent);
	printf("\nPI value = %f\n", pi_1);
}
