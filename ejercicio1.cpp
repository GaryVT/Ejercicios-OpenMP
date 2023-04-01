#include<stdio.h>
#include <ctime> 


unsigned ti, tf;

long num_steps=100000; 
double step=1.0/100000.0; 

int main()
{
	int i;
	double x, pi_1, sum =0.0;	
	for(i=0; i<num_steps;i++){
		x=(i-0.5)*step;
		sum += 4.0/(1.0+x*x);
	}
	pi_1 = step*sum;	
	printf("PI value = %f\n", pi_1);

}
