#include <iostream>
#include <stdlib.h>
using namespace std;
int main(int argc, char** argv)
{
	
	int A, B, C;
	
	cout<<"informe o valor de A: "<<endl;
	cin>>A;
	
	cout<<"informe o valor de B: "<<endl;
	cin>>B;
	
	cout<<"informe o valor de C: "<<endl;
	cin>>C;
	
	
	if( A+B < C){
		cout<<"A+B e menor que C"<<endl;
	} else {
		cout<<"A+B e maior que C"<<endl;
	}
	
	
	
	system("pause");
	return 0;
}