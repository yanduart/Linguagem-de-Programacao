#include <iostream>
#include <stdio.h>
#include <map>

 using namespace std;
 
 int main (){
 	setlocale(LC_ALL, "");
 int chave;
 map <int, string> mapa;
 mapa[1] = "KLS";
 mapa[2] = "KROTON";
 mapa[3] = "ESTRUTURA DE DADOS";
 
  cout << "Tamanho da estrutura de Mapa: " << mapa.size() << 
endl<<endl; 

printf("encontrando conte�do na chave\n");
cout << "chave 1: " << "conte�do: " << mapa[1] << endl << endl;

// 1 e a chave, aqui onde apaga o conte�do!
mapa.erase(1);

cout << "chave 1: " << "conte�do: " << mapa[1] << endl << endl;

 printf("Digite a chave: ");
 scanf("%d", &chave);
 if(mapa.find(chave) == mapa.end()){
	 printf("chave %d n�o existente no mapa\n", chave);
 }else{
	 printf("chave %d econtrada no mapa\n", chave);
 }

 
 return 0;
 }