 #include <stdlib.h>
 #include <stdio.h>
 #include <iostream>
 #include <map>
 using namespace std;
 int main (){
     int opcao = 0, banda;
     map <int, string > genero1;
     map <int, string > genero2;

genero1[1] = "Skank"; 
genero1[2] = "Barao Vermelho"; 
genero1[3] = "Capital Inicial"; 
genero1[4] = "Titas"; 
genero1[5] = "Nenhum de Nos"; 
genero2[1] = "Leandro e Leonardo"; 
genero2[2] = "Gian e Geovani"; 
genero2[3] = "Chitaozinho e Xororo"; 
genero2[4] = "Jorge e Mateus"; 
genero2[5] = "Bruno e Marrone"; 

do {
 banda = 0;
 system("cls"); 
 printf("Escolha o Genero:\n");
 printf("1 - Rock Nacional\n");
 printf("2 - Sertanejo\n");
 printf("3 - Sair\n");
 scanf("%d", &opcao);
 switch (opcao){
 case 1: 
 system("cls"); 
 printf("Escolha a Banda de Rock Nacional:\n");
 printf("1 - Skank\n");
 printf("2 - Barao Vermelho\n");
 printf("3 - Capital Inicial\n");
 printf("4 - Titas\n");
 printf("5 - Nenhum de Nos\n");
 cin>>banda;
 //scanf("%d", &banda);

 
if(genero1.find(banda) == genero1.end())
 cout << "\nOpcao Invalida!\n\n";
 else
 cout << "\nTocando: " + genero1[banda] + "\n\n";
 system("pause");
 opcao = 0;
 break;
                     
 case 2: 
 system("cls"); 
 printf("Escolha a Dupla Sertaneja:\n");
 printf("1 - Leandro e Leonardo\n");
 printf("2 - Gian e Geovanni\n");
 printf("3 - Chitaozinho e Xororo\n");
 printf("4 - Jorge e Mateus\n");
 printf("5 - Bruno e Marrone\n");
 scanf("%d", &banda);
 
 
 if(genero2.find(banda) == genero2.end())
 cout << "\nOpcao Invalida!\n\n";
 else
 cout << "\nTocando: " + genero2[banda] + "\n\n";
 system("pause");
 opcao = 0;
 break;

   default:
      break;
  
    }
 } while (opcao != 3);
 
 system("pause");
 return 0;
 }