#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	
	int num[3] [3];
	
	
	for(int i = 0; i < 3; i++){  //linha
		for(int j = 0; j < 3; j++){ //coluna
			cout<<"\ninforme um numero: ";
		    cin>>num[i] [j];
		}
	}
	
	
	for(int i = 0; i < 3; i++){
		cout<<endl;  
		for(int j = 0; j < 3; j++){ 
		    cout<<"\t"<<num[i] [j];
			}
		
	}
	
	return 0;
}