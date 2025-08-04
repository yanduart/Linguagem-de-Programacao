#include <iostream>
#include <stdlib.h>
using namespace std;
int main()

{
setlocale(LC_ALL,"portuguese");	
	
	
	int N1, N2, N3;
	
	cout<<"digite o primeiro número:"<<endl;
	cin>>N1;
	cout<<"digite o segundo número:"<<endl;
	cin>>N2;
	cout<<"digite o terceiro número:"<<endl;
	cin>>N3;
	

		
    // Ordenando os números
    if (N1 > N2) swap(N1, N2);      // swap significa trocar os valores de N1 e N2
    if (N1 > N3) swap(N1, N3);
    if (N2 > N3) swap(N2, N3);
	
	
	// Saída: Números em ordem crescente
    cout << "Os números em ordem crescente são: "  << N1 << ", " << N2 << ", " << N3 <<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	system ("pause");
	return 0;
}