#include <iostream>
#include <cmath>
using namespace std;

 long long Fccubo(int base = 0, int expoente = 0){
	    
	 return pow(base, expoente);	
 }


int main(int argc, char** argv)
{
setlocale(LC_ALL,"portuguese");

	int base = 0, expoente = 0;
	
	cout<<"--> elevando numero <-- "<<endl;
	
	cout<<"\ninforme a base: "<<endl;
	cin>>base;
	
	cout<<"\ninforme o expoente: "<<endl;
	cin>>expoente;
	
	cout<<"\na base elevado ao expoente é: "<<Fccubo(base, expoente);
	
	
	
	
	
	return 0;
}