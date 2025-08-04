#include <iostream>
#include <stdlib.h>
using namespace std;
int main(int argc, char** argv)
{
setlocale(LC_ALL,"portuguese");	
	
	
	int soma = 0;
	
	
	
	for (int i = 1; i <= 500; i++){
		
		if (i % 2 != 0 && i % 3 == 0){
		soma += i;}
	}
	
	
	cout<<"a soma dos numeros impares é: "<<soma<<endl;
	
	
	
	
	
	system ("pause");
	return 0;
}