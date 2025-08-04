#include <iostream>
#include <stdlib.h>
using namespace std;
int main(int argc, char** argv)
{
setlocale(LC_ALL,"portuguese");		
	
	
	int idade = 0, etaria1 = 0, etaria2 = 0, etaria3 = 0, etaria4 = 0, etaria5 = 0, total_pessoas = 0;
	float porcentagem1 = 0.0, porcentagem2 = 0.0, porcentagem3 = 0.0, porcentagem4 = 0.0, porcentagem5 = 0.0;
	
	for(int i = 1; i <= 15; i++){
		
		
		
		cout<<"informe a idade da pessoa "<<i<<": "<<endl;
		cin>>idade;
		
		total_pessoas++;
		
		if(idade > 1 && idade <= 15){
			etaria1++;
		}
		if(idade > 16 && idade <= 30){
			etaria2++;
		}
		if(idade > 31 && idade <= 45){
			etaria3++;
		}
		if(idade > 46 && idade <= 60){
			etaria4++;
		}
		if(idade >= 61){
		    etaria5++;	
		}
		
	}
		
	cout<<"\npessoas da faixa etaria de 1 a 15 são: "<<etaria1<<endl;
    cout<<"pessoas da faixa etaria de 16 a 30 são: "<<etaria2<<endl;
   	cout<<"pessoas da faixa etaria de 31 a 45 são: "<<etaria3<<endl;
   	cout<<"pessoas da faixa etaria de 46 a 60 são: "<<etaria4<<endl;
   	cout<<"pessoas da faixa etaria de 61 pra mais são: "<<etaria5<<endl;
	
	
    porcentagem1 = ((float)etaria1 / total_pessoas) * 100;
    porcentagem2 = ((float)etaria2 / total_pessoas) * 100;
    porcentagem3 = ((float)etaria3 / total_pessoas) * 100;
    porcentagem4 = ((float)etaria4 / total_pessoas) * 100;
    porcentagem5 = ((float)etaria5 / total_pessoas) * 100;
	
	cout<<"\na porcentagem respectivamente é: "<<porcentagem1<<"%"<<endl;
		cout<<"a porcentagem respectivamente é: "<<porcentagem2<<"%"<<endl;
			cout<<"a porcentagem respectivamente é: "<<porcentagem3<<"%"<<endl;
				cout<<"a porcentagem respectivamente é: "<<porcentagem4<<"%"<<endl;
					cout<<"a porcentagem respectivamente é: "<<porcentagem5<<"%"<<endl;
					
	
	
	
	
	
	
	system("pause");
	return 0;
}