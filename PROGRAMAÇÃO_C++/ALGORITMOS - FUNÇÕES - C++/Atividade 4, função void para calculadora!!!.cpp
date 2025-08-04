#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;


    void FcCalculadoraMenu(float x = 0.0, float y = 0.0){
		
		int opcao = 0;
		
		cout<<">\nMENU CALCULADORA<"<<endl;
		cout<<"-> 1. adição "<<endl;
		cout<<"-> 2. multiplicação "<<endl;
		cout<<"-> 3. subtração "<<endl;
		cout<<"-> 4. divisão "<<endl;
		cout<<"-> 5. raiz quadrada "<<endl;
		cout<<"-> 6. porcentagem "<<endl;
		cout<<"-> 7. sair "<<endl;
		cin>>opcao;
		
		switch (opcao) {
        case 1:
            cout << "Resultado da adição: " << x + y << endl;
            break;
        case 2:
            cout << "Resultado da multiplicação: " << x * y << endl;
            break;
        case 3:
            cout << "Resultado da subtração: " << x - y << endl;
            break;
        case 4:
            if (y != 0) {
                cout << "Resultado da divisão: " << x / y << endl;
            } else {
                cout << "Erro: Divisão por zero não é permitida." << endl;
            }
            break;
        case 5:
        	system ("cls");
        	cout<<"informe um numero para raiz quadrada: "<<endl;
        	int z;
        	cin>>z;
            cout << "raiz quadrada de " <<z<<" é: "<< sqrt(z)<< endl;
            break;
        case 6:
        	system ("cls");
            cout << "informe um numero: "<<endl;
            float v;
            cin>>v;
            cout << "informe uma porcentagem: "<<endl;
            float porcento;
            cin>>porcento;
            float resultado;
            resultado = (v * porcento)/100;
            cout<<"resultado é: "<<resultado<<endl;
            
            break;
        case 7:
            cout << "Saindo do programa..." << endl;
            break;
        default:
            cout << "Opção inválida." << endl;
	}
	}
	
int main(){
setlocale(LC_ALL,"portuguese");

    int opcao2 = 0;
     do{
	float x = 0.0, y = 0.0;
	
	
	cout<<"informe um valor: "<<endl;
	cin>>x;
	
	cout<<"informe outro valor: "<<endl;
	cin>>y;
	
	
	 // Chama a função do menu com os valores inseridos
     FcCalculadoraMenu(x, y);

	
	cout<<"digite -1 para sair do ciclo!! "<<endl;
	cout<<"digite -2 para continuar!! "<<endl;
	cin>>opcao2;
	
	system ("cls");
	
	}while(opcao2 != -1);
	
	
	
	
	
	
	
	return 0;
}