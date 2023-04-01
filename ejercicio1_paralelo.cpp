// OpenMP header
#include <omp.h>
#include <stdio.h>
#include <stdlib.h>


long num_steps=100000; 
double step=1.0/100000.0; 

int main(int argc, char* argv[])
{
	int nthreads, tid;
	int i;	
	double x, pi_1, sum =0.0;
	#pragma omp parallel private(nthreads, tid)
	{
	    tid = omp_get_thread_num();
		#pragma omp for 
			for(i=0; i<num_steps;i++)
			{
				x=(i-0.5)*step;
				sum += 4.0/(1.0+x*x);
			}	
		


		#pragma opm barrier
		pi_1 = step*sum;
		
		printf("PI value = %f\n", pi_1);
		printf("Thread %d, pi_1 = %d\n", tid, pi_1);
	}

}
