#include <iostream>

using namespace std;

int main(){
	
	int N=1000, i, j;
	//cin>>N;
	bool esprimo[N];//tabla que nos indica si es primo
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
	
}

