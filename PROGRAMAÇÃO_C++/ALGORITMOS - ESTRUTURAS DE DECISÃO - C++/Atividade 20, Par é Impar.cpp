#include <iostream>
#include <stdlib.h>
using namespace std;
int main(int argc, char** argv)
{
	
	int numero;
	
	   cout<<"digite um numero"<<endl;
	   cin>>numero;
	   
	
	if (numero % 2  == 0) {
		cout<<"esse numero e par!"<<endl;		
		} else {
			cout<<"esse numero e impar!"<<endl;
		}
		
	
	system("pause");
	return 0;
}