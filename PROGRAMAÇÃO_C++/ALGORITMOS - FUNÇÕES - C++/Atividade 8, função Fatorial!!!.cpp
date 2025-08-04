#include <iostream>
using namespace std;

// função fatorial!!
  long long Fcfatorial(int valor = 0, long long multiplicar = 1){
	  
	  
	  
	   
	  if(valor != 0){
	  	 multiplicar *= valor;          // multiplicar inicializa com 1 pra nao ocorre multiplicaçao por 0!!!!
	  return Fcfatorial(valor - 1, multiplicar);
	  } 
	  
	  else {
      return multiplicar;
	  }
  }

int main(int argc, char** argv)
{
setlocale(LC_ALL,"portuguese");
	
	int valor;
    long long multiplicar = 1;
	
	cout<<"informe um valor: "<<endl;
	cin>>valor;
	
	
	cout<<"o fatorial do numero é: "<<Fcfatorial(valor, multiplicar)<<endl;
	
	
	
	return 0;
}