#include <iostream>
#include <stdlib.h>
using namespace std;
int main(int argc, char** argv)
{
setlocale(LC_ALL,"portuguese");
	
	
	int N1, N2, N3;
	
	cout<<"informe o primeiro n�mero: "<<endl;
	cin>>N1;
	
	cout<<"informe o segundo n�mero: "<<endl;
	cin>>N2;
	
	cout<<"informe o terceiro n�mero: "<<endl;
	cin>>N3;
	
	
	if (N1 < N2) swap(N1,N2);
	if (N1 < N3) swap(N1,N3);
	if (N2 < N3) swap(N2,N3);
	
	
	cout<<"a ordem decrescente �: "<<N1<<", "<<N2<<", "<<N3<<endl;
	
	
	system("pause");
	return 0;
}