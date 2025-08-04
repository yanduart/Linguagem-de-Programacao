#include <iostream>
#include <cstring>
using namespace std;
int main(int argc, char** argv)
{
	
	char letra[2], letra1[2], temp[2];
	
	cout<<"informe a primeira letra: "<<endl;
	cin.getline(letra,2); 
	
	
	cout<<"informe a segunda letra: "<<endl;
	cin.getline(letra1,2); 
	

	
	strcpy(temp,letra);
	strcpy(letra,letra1);
	strcpy(letra1,temp);
	
	
	
	
	
	cout<<"as letras invertidas sao respectivamente: "<<letra<<", "<<letra1;
	
	
	
	
	
	
	
	return 0;
}