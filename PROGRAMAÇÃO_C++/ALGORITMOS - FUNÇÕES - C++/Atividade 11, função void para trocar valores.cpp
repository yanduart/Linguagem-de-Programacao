#include <iostream>
using namespace std;


void troca (int a, int b)
{
	int temp;
	temp = a;
	a=b;
	b=temp;    
}
int main(){
	setlocale(LC_ALL,"portuguese");
	int a = 2, b = 3; 
	cout<<"\nantes de chmar a fun��o "<<a<<","<<b<<endl;
	
	swap(a, b);
	
	cout<<"\ndepois de chamar a fun��o "<<a<<","<<b<<endl;
	return 0; 
	
	
	
	
	
	
}