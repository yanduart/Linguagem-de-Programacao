#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <ctime>
#include <cstdlib>
using namespace std;


    int FcSorteio(int aleatorio = 0){
		
		aleatorio = rand() % 10;
		
		return aleatorio;
		
	}


int main(int argc, char** argv)
{
setlocale(LC_ALL,"portuguese");
srand(time(NULL));

	char genero = 0;
	char nome[20];
	int idade = 0, compra = 0;
	float totalCompra = 0.0;
	float produto[60];
	int aleatorio = 0;
	int tentativa = 0, error = 0;
	int numeroAleatorio = 0;
	
	
	cout<<"informe o genero da pessoa em ('F', 'M' OU 'f' 'm'): "<<endl;
	cin>>genero;
    cin.ignore(); // Limpa o caractere de nova linha do buffer
	system ("cls");
	
	cout<<"informe o nome da pessoa: "<<endl;
	cin.getline(nome,20);
	system ("cls");
	
	cout<<"informe a idade: "<<endl;
	cin>>idade;
	system ("cls");
	
	cout<<"informe a quantidade de produtos comprados: "<<endl;
	cin>>compra;
	system ("cls");
	
	
	for(int i = 0; i < compra; i++){
		cout<<"o valor do "<<i+1<<" produto é: "<<endl;
		cin>>produto[i];
		totalCompra += produto[i];
	}
	
	system("cls");
	
	
	
	
	if((genero == 'f' || genero == 'm' || genero == 'M' || genero == 'M') && idade >=30 && idade <= 45 
	&& compra>=10 && totalCompra>=50){
		cout<<"o nome da pessoa é: "<<nome<<"\ngenero: "<<genero<<"\nidade: "<<idade<<"\no total de produtos é: "<<compra<<"\no preço total é: "<<totalCompra<<endl;
		cout<<"\nessa pessoa tem potencial de compra!!!!!";
		cout<<"\n-->parabens você esta participando de um sorteio<-- "<<endl;
		
		cout<<"--> 1. para participar."<<endl;
		cout<<"--> 2. para receber 10% de desconto nas proximas compras."<<endl;
		cout<<"--> 3. para receber um premio da loja."<<endl;
		int opcao = 0;
		cin>>opcao;
		system("cls");
		
	
		switch(opcao){
			case 1: 
				numeroAleatorio = FcSorteio(aleatorio);
				if(numeroAleatorio >= 2 && numeroAleatorio <= 5){
					cout<<"que pena, voce nao recebeu nada, tente na proxima"<<endl;
					break;
				}
				if(numeroAleatorio >= 6 && numeroAleatorio <= 10){
					cout<<"parabens voce recebeu 40% de desconto nas proximas compras!"<<endl;
					break;
		}
		
		        if (numeroAleatorio == 1){
					cout<<"PARABENS VOCE ADQUIRIU A PROXIMA COMPRA TOTALMENTE DE GRAÇA!!"<<endl;
					break;
				}
		   case 2:
		   	   cout<<"voce recebeu 10% de desconto nas proximas compras!"<<endl;
		   	   break;
		      
		   case 3:
		   	cout<<"-->voce ira participar de um sorteio interativo para ganhar um kit gamer da loja"<<endl;
			   cout<<"tente acertar o numero aleatorio de 0 a 10! "<<endl;
			   
			   numeroAleatorio = FcSorteio(aleatorio);
			  while(true){
			  	
				  cin>>tentativa;
				  
				  if(tentativa == numeroAleatorio){
					  cout<<"parabens voce acetou!"<<endl;
					  if(error <= 5){
						  cout<<"parabens voce ganhou o kit gamer! "<<endl;
						  
						  } else {
                             cout<<"voce nao ganhou nada infelismente!"<<endl;
							  }
					  break;  // Se o usuário acertou o número, encerramos o loop
				  }else{
					  error++;
				  }
				  
				  
				  
			  }
			  
			   
			   
		}
	}else{
		cout<<"essa pessoa nao tem potencial de compra!!!";
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}