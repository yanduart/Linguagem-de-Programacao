#include <iostream>
#include <stdlib.h>
using namespace std;
int main(int argc, char** argv)
{
setlocale(LC_ALL,"portuguese");
	
	
	int N1, N2, N3;
	
	cout<<"informe o primeiro número: "<<endl;
	cin>>N1;
	
	cout<<"informe o segundo número: "<<endl;
	cin>>N2;
	
	cout<<"informe o terceiro número: "<<endl;
	cin>>N3;
	
	
	if (N1 < N2) swap(N1,N2);
	if (N1 < N3) swap(N1,N3);
	if (N2 < N3) swap(N2,N3);
	
	
	cout<<"a ordem decrescente é: "<<N1<<", "<<N2<<", "<<N3<<endl;
	
	
	system("pause");
	return 0;
}