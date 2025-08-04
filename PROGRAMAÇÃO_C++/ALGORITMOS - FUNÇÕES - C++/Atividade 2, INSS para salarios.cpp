#include <iostream>
using namespace std;


float FccalculaINSS(float valor = 0.0){
	
      float valorINSS = 0.0;
     
      if(valor <= 1.659,38){
		  valorINSS = valor - (valor * 0.08);
		 
	  }
	 if(valor >= 1.659,39 && valor <= 2.765,66){
		  valorINSS = valor - (valor * 0.09);
		 
	  }
	
	 if(valor >= 2.765,67 && valor <= 5.531,31){
		  valorINSS = valor - (valor * 0.11);
		 
	  }
	
	else if(valor >= 5.531,32){
		valorINSS = 604,44;
		
	}
	
	return valorINSS; // retorna apenas um valor da função;
	 
}

int main(){
	
	float valor = 0.0;
	
	cout<<"informe um valor: "<<endl;
	cin>>valor;
	
	cout<<"\no INSS e: "<<valor - FccalculaINSS(valor)<<endl;
	cout<<"\no valor a receber sem INSS e: "<<FccalculaINSS(valor);
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}