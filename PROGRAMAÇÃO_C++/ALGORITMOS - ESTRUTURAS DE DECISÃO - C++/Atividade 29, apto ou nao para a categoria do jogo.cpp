#include <iostream>
#include <stdlib.h>
using namespace std;
int main(int argc, char** argv)
{
setlocale(LC_ALL,"portuguese");

     int idade;
	 float altura;
	 
	 
	 cout<<"informe a idade: "<<endl;
	 cin>>idade;
	 
	 cout<<"informe a altura em metros(M): "<<endl;
	 cin>>altura;
	 
	 	if ((idade >= 6 && idade <= 10) && (altura >= 1.00 && altura < 1.40)){
	 		cout<<"Apto para a Categoria Infantil!!"<<endl;
		 } else if ((idade >= 11 && idade <= 17) && (altura >= 1.40 && altura < 1.70)){
		    cout<<"Apto para a categoria júnior!!"<<endl;
		 } else if ((idade >= 18 && idade <= 35) && (altura >= 1.70 && altura < 1.80)){
			 cout<<"Apto para a categoria profissional!!"<<endl;
		 } else if (idade > 35 && (altura >= 1.60 && altura < 1.70)){
			 cout<<"Apto para a categoria sênior!!"<<endl;
		 } else {
			 cout<<"\nNão Apto!!"<<endl;
		 }
	
		
	
	system ("pause");
	return 0;
}