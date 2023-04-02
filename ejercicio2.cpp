#include <iostream>
#include <ctime> 

using namespace std;

int main(){
	unsigned t0, t1;

	int N=1000, i, j;
	//cin>>N;
	bool esprimo[N];//tabla que nos indica si es primo
	t0=clock();
	for(i=0; i<N;i++){
		esprimo[i]=true;
	}
	for(i=2;i<N;i++){
		//i*2, i*3, i*4...
			for (j=2; i*j<N;j++){
				esprimo[i*j]=false;//tacha multiplos
			}	


	}
	for(i=2;i<N;i++){//inicio desde 2 esprimo
		if(esprimo[i]){
			cout<<i<<"  ";
		}
	}
	t1 = clock();
	double time = (double(t1-t0)/CLOCKS_PER_SEC);
	cout << "\nTiempo de ejecucion: " << time << endl;
	
}
