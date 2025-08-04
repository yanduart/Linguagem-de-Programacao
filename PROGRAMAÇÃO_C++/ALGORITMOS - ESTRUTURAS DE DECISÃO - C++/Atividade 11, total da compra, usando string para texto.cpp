#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
int main()
{
setlocale(LC_ALL,"portuguese");	
	
	string produto;
	double preco_produto = 19.99;
	double total_compra;
	int quantidade;
		
	cout<<"digite o nome do produto:"<<endl;
    cin>>produto;

	cout<<"digite a quantidade do produto:"<<endl;
	cin>>quantidade;
	
	total_compra = preco_produto * quantidade;
	
	cout<<"total da compra é:"<<total_compra<<endl;
	
	system ("pause");
	return 0;
}