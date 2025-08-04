#include <iostream>
using namespace std;


float fcCalculaMedia(float nota1 = 0.0, float nota2 = 0.0, float nota3 = 0.0)
   {
	     float media = 0.0;
	     media = (nota1+nota2+nota3)/3;
	     return media;                }

		 
		 
 int main(){
setlocale(LC_ALL,"portuguese");
		float nota1 = 0.0, nota2 = 0.0, nota3 = 0.0;	 
			 
		cout<<"informe o primeiro numero: "<<endl;
		cin>>nota1;	 
		cout<<"informe o segundo numero: "<<endl;
		cin>>nota2;		 
		cout<<"informe o terceiro numero: "<<endl;
		cin>>nota3;		 
			 
		cout<<"a média e: "<<fcCalculaMedia(nota1,nota2,nota3)<<endl;
			 
			 
			 
			 
			 
			 
			 
			 
			 
	return 0;		 
		 }