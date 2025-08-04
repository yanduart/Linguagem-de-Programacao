#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	
	
	int matriz[3][3];
	int result1 = 0, result2 = 0, result3 = 0;
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout<<"linha "<<i+1<<" coluna "<<j+1<<" digite um numero: "<<endl;
		    cin>>matriz[i][j];	
			
			
			if(j == 0){
				result1 += matriz[i][j];
			}
			if(j == 1){
				result2 += matriz[i][j];
			}
			if(j == 2){
				result3 += matriz[i][j];
			}
				
				
				
		}
			
			
			
			
	}
	
		
	
	
	for(int i = 0; i < 3; i++){
		cout<<"linha "<<i+1<<":";
		for(int j = 0; j < 3; j++){
			cout<<"\t"<<matriz[i][j];
		}
		cout<<endl;
	}
	
	
	cout<<"a soma da coluna 1 e: "<<result1<<endl;
		cout<<"a soma da coluna 2 e: "<<result2<<endl;
			cout<<"a soma da coluna 3 e: "<<result3<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}