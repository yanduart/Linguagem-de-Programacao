#include <iostream>
#include <stdlib.h>
using namespace std;
int main(int argc, char** argv)
{
setlocale(LC_ALL,"portuguese");	
	
	int A, B, C;
	
	cout<<"informe o valor de A: "<<endl;
	cin>>A;
	
	cout<<"informe o valor de B: "<<endl;
	cin>>B;
	
	
	if (A != B){
		C = A * B;
	} else {
		C = A + B;		
		}
			
	
	cout<<"o valor esperado é: "<<C<<endl;
	
	
	system("pause");
	return 0;
}