#include <iostream>
#include <stdlib.h>
using namespace std;
int main()

{
setlocale(LC_ALL,"portuguese");

      // Declara��o das vari�veis para armazenar as notas e a m�dia
    double nota1, nota2, nota3, nota4, media;

    // Solicita ao usu�rio as quatro notas do aluno
    cout << "Digite a primeira nota: ";
    cin >> nota1;
    cout << "Digite a segunda nota: ";
    cin >> nota2;
    cout << "Digite a terceira nota: ";
    cin >> nota3;
    cout << "Digite a quarta nota: ";
    cin >> nota4;

    // Calcula a m�dia das notas
    media = (nota1 + nota2 + nota3 + nota4) / 4.0;

    // Exibe a m�dia das notas
    cout << "A m�dia das notas �: " << media << endl;
	
    // Verifica se o aluno est� aprovado ou reprovado        
	    if (media >= 7.0) {
        cout << "Aprovado!" << endl;
     } 
	 else if(media <= 0){
		 cout<<"n�o se aplica!"<<endl;	 
	 }
	 	 
	 else {
    cout << "Reprovado!" << endl;
    } 
	  
	  	
	system ("pause");
	return 0;
}