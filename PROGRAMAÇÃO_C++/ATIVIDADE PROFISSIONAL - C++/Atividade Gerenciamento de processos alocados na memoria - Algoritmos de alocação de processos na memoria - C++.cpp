#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Fun��o para gerar n�mero aleat�rio entre 0 e 49
int gerarNumeroAleatorio() {
    return rand() % 50;
}

int main(int argc, char** argv) {
setlocale(LC_ALL,"portuguese");
    // Vetores para a mem�ria e os processos
    int vetMemoria[50] = {0};
    int vetProcesso[3] = {2, 3, 5};
    int posicaoMemoria, inicio, fim, processo, opcao2;

    // Semente para gerar n�meros aleat�rios com base na hora atual
    srand(time(NULL));

    for(int j = 0; j < 3; j++) {
        processo = vetProcesso[j];

        // Loop infinito para tentar alocar at� encontrar espa�o livre
        while (true) {
            // Gera uma posi��o aleat�ria
            posicaoMemoria = gerarNumeroAleatorio();
            inicio = posicaoMemoria;
            fim = posicaoMemoria + processo;

            // Verifica se o processo cabe na mem�ria e se as posi��es est�o livres
            if (fim <= 50) {  // Verifica se o fim n�o ultrapassa o limite do vetor
                bool espacoLivre = true;

                // Verifica se todas as posi��es necess�rias est�o livres
                
                for (int k = inicio; k < fim; k++) {
                    if (vetMemoria[k] != 0) {
                        espacoLivre = false;
                        break;
                    }
                }

                // Se o espa�o est� livre, aloca o processo e sai do loop
                if (espacoLivre) {
                    for (int k = inicio; k < fim; k++) {
                        vetMemoria[k] = vetProcesso[j];
                    }
                    break; // Sai do loop infinito
                }
            }
        }
    }

    cout << "-> Mem�ria e Processos Alocados: \n\n";

    // Imprime o vetor de mem�ria
    for (int i = 0; i < 50; i++) {
        if (vetMemoria[i] == 0) {
            cout << "| ";
        } else {
            cout << "|" << vetMemoria[i];
        }
    }

    cout << "\n\n";
    
    do{
    cout<<"--->digite a opa��o de escolha do algoritimo de aloca��o do processo na memoria<---"<<endl;
    
    cout<<"\n1. para First Fit(primeiro que couber)."<<endl;
    cout<<"2. para Best Fit(melhor que couber)."<<endl;
    cout<<"3. para Worst Fit(pior que couber)."<<endl;
    int opcao = 0;
    cin>>opcao;
    cin.ignore();
    
    
    cout<<"informe o tamanho do novo processo"<<endl;
			int Novoprocesso = 0;
			cin>>Novoprocesso;
			cin.ignore();
    
    
    
    bool alocado = true;
    int melhorInicio = -1, menorEspaco = 51, maiorEspaco = -1;

    // Verifica e aloca conforme a op��o escolhida
    for (int i = 0; i <= 50 - Novoprocesso; i++) {
        int espacoLivre = 0;
        while (i + espacoLivre < 50 && vetMemoria[i + espacoLivre] == 0) {
            espacoLivre++;
        }
        if (espacoLivre >= Novoprocesso) {
            if (opcao == 1 && melhorInicio == -1) { // First Fit
                melhorInicio = i;
                break;
            }
            if (opcao == 2 && espacoLivre < menorEspaco) { // Best Fit
                melhorInicio = i;
                menorEspaco = espacoLivre;
            }
            if (opcao == 3 && espacoLivre > maiorEspaco) { // Worst Fit
                melhorInicio = i;
                maiorEspaco = espacoLivre;
            }
        }
        i += espacoLivre;
    }

    // Aloca o processo na posi��o calculada
    if (melhorInicio != -1) {
        for (int i = melhorInicio; i < melhorInicio + Novoprocesso; i++) {
            vetMemoria[i] = Novoprocesso;
        }
        alocado = true;
    }


    
    for (int i = 0; i < 50; i++) {
        if (vetMemoria[i] == 0) {
            cout << "| ";
        } else {
            cout << "|" << vetMemoria[i];
        }
    }
    cout << "\n";

     cout << "\nInforme 1 para continuar ou 2 para sair:\n";
     cin >> opcao2;
     cin.ignore();

}while(opcao2 == 1);
    
    
    
    
    return 0;
}