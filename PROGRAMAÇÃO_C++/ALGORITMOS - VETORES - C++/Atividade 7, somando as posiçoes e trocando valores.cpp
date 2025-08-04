#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	
	int vetor[6], soma;
	
	cout<<"informe os 6 valores do vetor: "<<endl;
	
	for(int i = 0; i < 6; i++){
		
		cin>>vetor[i];
		
	}
	
		soma = vetor[0] + vetor[1] + vetor[5];	

		
		cout<<"a soma das posicoes no vetor e: "<<soma<<endl;
		
		
			
			for (int i = 0; i < 6; i++) {
        if (i == 1) {
            vetor[5 - i] = 100; 		
			}
				}

					
	
	cout<<"o valor do vetor e: "<<endl;
		for(int i = 0; i < 6; i++){
		
		cout<<vetor[i]<<" ,";
		
	}
	
	
	
	return 0;
}