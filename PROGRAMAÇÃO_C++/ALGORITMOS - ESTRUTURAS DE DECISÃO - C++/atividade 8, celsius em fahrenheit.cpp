#include <iostream>
#include <stdlib.h>
using namespace std;
int main()

{
setlocale(LC_ALL,"portuguese");
		
		double celsius, fahrenheit;
		int opcao;
do{
    // Solicita a temperatura em Celsius ao usuário
    cout << "Digite a temperatura em Celsius: ";
    cin >> celsius;

    // Calcula a temperatura em Fahrenheit
    fahrenheit = (180 * (celsius + 32)) / 100;

    // Exibe o resultado
    cout << "A temperatura em Fahrenheit é: " << fahrenheit << endl;	
	
	
	cout<<endl<<"Infome 1 se deseja continuar!"<<endl;
	cout<<"Informe 2 se deseja sair"<<endl;
	cin>>opcao;
	
	system("cls");
	
}while(opcao == 1);
system ("pause");
return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
