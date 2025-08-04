#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


// Função
int gerarNumeroAleatorio() {
	
    return rand() % 50;
}

int main(int argc, char** argv)
{
	// Vetor	
    int vetMemoria[50] = {0}, vetProcesso[3] = {2,3,5};
    int limite =0, posicaoMemoria, inicio=0, fim=0, processo;
       	
    // Sementre hora atual
    srand(time(NULL));
    
	// Gera número aleatório entre 1 e 80
    posicaoMemoria = gerarNumeroAleatorio();
    
    for(int j=0; j<3; j++){
		
		// Qnt de memoria do processo
		processo = vetProcesso[j];
		
		// Posição aleatoria da memoria
		posicaoMemoria = gerarNumeroAleatorio();
		
		// Posição inicial / fim
		inicio = posicaoMemoria;
		fim = posicaoMemoria + processo;
		
		// Depois fazer função do limite
		
		for(int k=inicio; inicio < fim; inicio++)
		{
			
			vetMemoria[inicio] = vetProcesso[j];
			
			
			
		}
			
		
	}
	
	cout << "-> Mémoria e Processos Alocados: \n\n";

	// Imprime vetor memoria
	for(int i=0; i<50; i++)
	{
		if(vetMemoria[i] == 0){
			cout << "|" << " ";

		}
		else{
			cout << "|" << vetMemoria[i];
	
		}
		
	}
	
	cout << "\n\n";
	
	return 0;
}