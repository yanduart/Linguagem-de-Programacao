#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(int argc, char** argv)
{
	
	int x = 0;
	int memoria[20];
	int posicaoAleatoria;
	int processo;
	
	
	for(int i = 0; i < 20; i++){
		memoria[i] = 0;
	}
	
	cout<<"memoria: ";
	
	for(int i = 0; i < 20; i++){
		cout<<memoria[i];
	}
	
	srand(time(NULL));
	
	
	
	for(int i = 0; i < 3; i++){
	   
	if(i == 0) {
		cout<<"\ninforme o tamanho do processo: "<<endl;
		cin>>processo;
	
	    
		
		for(int i = 0; i<processo; i++){
	 do {
            posicaoAleatoria = rand() % 20; 
        } while (memoria[posicaoAleatoria] != 0); 
         
        memoria[posicaoAleatoria] = processo;
	}
	
	}
		
		
	if(i == 1) {
			cout<<"\ninforme o tamanho do processo: "<<endl;
		cin>>processo;
	
	
			for(int i = 0; i<processo; i++){
	 do {
            posicaoAleatoria = rand() % 20; 
        } while (memoria[posicaoAleatoria] != 0); 
        
        memoria[posicaoAleatoria] = processo;
	}
	
	}
	
	
	if(i == 2) {
			cout<<"\ninforme o tamanho do processo: "<<endl;
		cin>>processo;
	
	
			for(int i = 0; i<processo; i++){
	 do {
            posicaoAleatoria = rand() % 20; 
        } while (memoria[posicaoAleatoria] != 0); 
        
        memoria[posicaoAleatoria] = processo;
        
		}
	}
	
	
	
	
	
		
	}
   
	
	
     cout<<"\nmemoria com dados: "<<endl;
	for(int i = 0; i < 20; i++){
		cout<<memoria[i];
	}
	
	

	
	
	
	
	
	
	return 0;
}