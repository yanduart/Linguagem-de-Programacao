#include <iostream>
#include <stdlib.h>
using namespace std;
int main(int argc, char** argv)
{
setlocale(LC_ALL,"portuguese");	
	
	float Area;
	int base_maior, base_menor, altura;
	
	cout<<"calculando a área do trapézio!"<<endl;
	cout<<"informe a base maior: "<<endl;
	cin>>base_maior;
	cout<<"informe a base menor: "<<endl;
	cin>>base_menor;
	cout<<"informe a altura: "<<endl;
	cin>>altura;
	
	
	Area = (( base_maior + base_menor ) * altura)/2;
	
	
	cout<<"a área do trapézio é: "<<Area<<endl;
	
	
	
	
	system ("pause");
    return 0;
}