#include <iostream>
#include <stdlib.h>
using namespace std;
int main(int argc, char** argv)
{
setlocale(LC_ALL,"portuguese");	
	
	
	int vetor1[5], vetor2[5], result[10];
	
	cout<<"informe os 5 numeros para o vetor 1"<<endl;
	
   for (int i = 0; i < 5; i++){
	   
	   cin>>vetor1[i];
	   
   }	
	
	cout<<"informe os 5 numeros para o vetor 2"<<endl;
	
   for (int i = 0; i < 5; i++){
	   
	   cin>>vetor2[i];
	   
   }	
	
	
		for (int i = 0; i < 5; i++){
		
		result[2 * i] = vetor1[4 - i];
	    result[2 * i + 1] = vetor2[4 - i];
		
	}
	
	
	 cout<<"vetores invertidos e intercalados!!!"<<endl;
	 
	 for (int i = 0; i < 10; i++){
		
		cout<<result[i]<<" , ";
		
	}
	
	
	
	
	
	system("pause");
	return 0;
}