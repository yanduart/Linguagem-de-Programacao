#include <iostream>
#include <map>
#include <string>
#include <cstdlib>
using namespace std;

/* Cria a estrutura da lista */
struct Candidatos {
    string nomecand;
    int totalvotos;
};

int main() {
    int i = 0, chave, opcao;
    map<int, Candidatos> MapaVotos;
    Candidatos votos;

    do {
        system("cls");
        cout << "Selecione uma opcao:\n";
        cout << "1 - Adicionar um Candidato\n";
        cout << "2 - Votar\n";
        cout << "3 - Resultado parcial\n";
        cout << "4 - Sair\n";
        cin >> opcao;
        cin.ignore();

        switch (opcao) {
        case 1:
            system("cls");
            cout << "Adicionar novo candidato\n";
            cout << "Informe o nome do candidato: ";
            getline(cin, votos.nomecand);
            votos.totalvotos = 0;

            // Gera próxima chave única (menor número disponível)
            chave = 1;
            while (MapaVotos.count(chave)) {  // enquanto tiver cheio faça!
                chave++;
            }

            MapaVotos[chave] = votos;

            cout << "\nCandidato adicionado com sucesso!\n";
            cout << "Nome: " << MapaVotos[chave].nomecand << "\n";
            cout << "Total de votos: " << MapaVotos[chave].totalvotos << "\n";
            system("pause");
            break;

        case 2:
            system("cls");
            cout << "Vote pelo numero:\n";
            for (i = 1; i <= MapaVotos.size(); i++) {
                cout << i << " - ";
                if (MapaVotos.find(i) != MapaVotos.end()) {
                    cout << MapaVotos[i].nomecand << endl;
                } else {
                    cout << "[Candidato Removido]" << endl;
                }
            }

            cout << "\nDigite o numero do candidato: ";
            cin >> chave;

            if (MapaVotos.find(chave) == MapaVotos.end()) {
                cout << "Candidato nao existe!\n";
            } else {
                MapaVotos[chave].totalvotos++;
                cout << "Voto realizado com sucesso!\n";
            }
            system("pause");
            break;

        case 3:
            system("cls");
            cout << "*** Resultado Parcial! ***\n";
            for (i = 1; i <= MapaVotos.size(); i++) {
                cout << "Candidato numero " << i << ": ";
                if (MapaVotos.find(i) != MapaVotos.end()) {
                    cout << "\nNome: " << MapaVotos[i].nomecand
                         << "\nTotal de Votos: " << MapaVotos[i].totalvotos << "\n\n";
                } else {
                    cout << "\nCandidato nao encontrado!\n\n";
                }
            }
            system("pause");
            break;

        case 4:
            cout << "Encerrando...\n";
            break;

        default:
            cout << "Opcao invalida!\n";
            system("pause");
            break;
        }

    } while (opcao != 4);

    return 0;
}