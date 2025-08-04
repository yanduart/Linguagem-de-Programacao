#include <iostream>
#include <cstring>
using namespace std;


  int FcPalavra(char palavra[20]){
	  
	 int tam = 0;
	  
	  for(int i = 0; i < strlen(palavra); i++){
		  
		  if(palavra[i] != ' '){
			  tam++;
		  }
		  
	  }
	    return tam;
  }

   
   int FcVogais(char palavra[20]){
	   
	   int vogal = 0;
	   
	   for(int i = 0; i < strlen(palavra); i++){
		   
		   if(palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u'
		   || palavra[i] == 'A' || palavra[i] == 'E' || palavra[i] == 'I' || palavra[i] == 'O' || palavra[i] == 'U'){
			   vogal++;
		   }
	   }
	   return vogal;
   }
   

   int FcConsoante(char palavra[20]){
	   
	   int consoan = 0;
	   
	   for(int i = 0; i < strlen(palavra); i++){
		   
		   if(palavra[i] == 'b'|| palavra[i] == 'c'|| palavra[i] == 'd'|| palavra[i] == 'f'|| palavra[i] == 'g'
		   || palavra[i] == 'h'|| palavra[i] == 'j'|| palavra[i] == 'k'|| palavra[i] == 'l'|| palavra[i] == 'm'
           || palavra[i] == 'n'|| palavra[i] == 'p'|| palavra[i] == 'q'|| palavra[i] == 'r'|| palavra[i] == 's'
		   || palavra[i] == 't'|| palavra[i] == 'v'|| palavra[i] == 'w'|| palavra[i] == 'x'|| palavra[i] == 'y'
		   || palavra[i] == 'z'|| palavra[i] == 'B'|| palavra[i] == 'C'|| palavra[i] == 'D'|| palavra[i] == 'F'
		   || palavra[i] == 'G'|| palavra[i] == 'H'|| palavra[i] == 'J'|| palavra[i] == 'K'|| palavra[i] == 'L'
		   || palavra[i] == 'M'|| palavra[i] == 'N'|| palavra[i] == 'P'|| palavra[i] == 'Q'|| palavra[i] == 'R'
		   || palavra[i] == 'S'|| palavra[i] == 'T'|| palavra[i] == 'V'|| palavra[i] == 'W'|| palavra[i] == 'X'
		   || palavra[i] == 'Y'|| palavra[i] == 'Z'){
			   consoan++;
		   }
	   }
	   return consoan;

   }
   

int main(int argc, char** argv)
{
setlocale(LC_ALL,"portuguese");
	char palavra[20];
	
	cout<<"escreva uma palavra: "<<endl;
	cin.getline(palavra, 20);
	

	
	cout<<"o tamanho da palavra sem espaço é: "<<FcPalavra(palavra)<<endl;
	cout<<"\no tamanho da palavra com espaço é: "<<strlen(palavra)<<endl;
	cout<<"\na quantidade de vogais é: "<<FcVogais(palavra)<<endl;
	cout<<"\na quantidade de consoantes é: "<<FcConsoante(palavra)<<endl;
	
	return 0;
}