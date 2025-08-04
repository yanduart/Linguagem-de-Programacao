#include <iostream>
#include <stdlib.h>
using namespace std;
int main()

{
setlocale(LC_ALL,"portuguese");

      // Declaração das variáveis para armazenar as notas e a média
    double nota1, nota2, nota3, nota4, media;

    // Solicita ao usuário as quatro notas do aluno
    cout << "Digite a primeira nota: ";
    cin >> nota1;
    cout << "Digite a segunda nota: ";
    cin >> nota2;
    cout << "Digite a terceira nota: ";
    cin >> nota3;
    cout << "Digite a quarta nota: ";
    cin >> nota4;

    // Calcula a média das notas
    media = (nota1 + nota2 + nota3 + nota4) / 4.0;

    // Exibe a média das notas
    cout << "A média das notas é: " << media << endl;
	
    // Verifica se o aluno está aprovado ou reprovado        
	    if (media >= 7.0) {
        cout << "Aprovado!" << endl;
     } 
	 else if(media <= 0){
		 cout<<"não se aplica!"<<endl;	 
	 }
	 	 
	 else {
    cout << "Reprovado!" << endl;
    } 
	  
	  	
	system ("pause");
	return 0;
}