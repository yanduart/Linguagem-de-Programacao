#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
int main(int argc, char** argv)
{
setlocale(LC_ALL,"portuguese");	
	
	
	string name;
	int idade;
	
	cout<<"escreva o nome da pessoa: "<<endl;
	cin>>name;
	cout<<"digite a idade da pessoa: "<<endl;
	cin>>idade; 
	
	
     if (idade >= 0 && idade <= 29){                // && significa and, "e"
		 cout<<"nome: "<<name<<"\nidade: "<<idade<<"\nfaixa et�ria: jovem"<<endl;
	 } else if (idade >=20 && idade <=59){
		 cout<<"nome: "<<name<<"\nidade: "<<idade<<"\nfaixa et�ria: adulta"<<endl;
	 }else if(idade >= 60) {
		 cout<<"nome: "<<name<<"\nidade: "<<idade<<"\nfaixa et�ria: idoso"<<endl;
	 } else {
		 cout<<"n�o correspondente"<<endl;
	 }
	 	
	
	system ("pause");
	return 0;
}