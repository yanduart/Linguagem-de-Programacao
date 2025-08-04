#include <iostream>
#include <cstring>
using namespace std;
int main(int argc, char** argv)
{
	
	char caracteres[30];
	
	cout<<"informe alguns caracteres em letra minuscula: "<<endl;
	cin.getline(caracteres,30);
	
	strupr(caracteres);
	
	cout<<"os caracteres em letra maiuscula e: "<<caracteres<<endl; 
	
	
	
	
	return 0;
}