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

		
	int N=1000, i, j;
	//cin>>N;
	bool esprimo[N];//tabla que nos indica si es primo

	
	#pragma omp parallel private(nthreads, tid)
	{
	    tid = omp_get_thread_num();
		#pragma omp for
			for(i=0; i<N;i++){
				esprimo[i]=true;
			}
		
		#pragma omp for reduction (*:esprimo)
			for(i=2;i<N;i++){
				//i*2, i*3, i*4...
					for (j=2; i*j<N;j++){
						esprimo[i*j]=false;//tacha multiplos
					}	
			}
		#pragma omp barrier
			for(i=2;i<N;i++){//inicio desde 2 esprimo
				if(esprimo[i]){
					printf("%d ", i);
				}
			}	
	#pragma barrier
	clock_t end = clock();
	time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
	printf("\nEl tiempo transcurrido es %f segundos", time_spent);
	}
}

