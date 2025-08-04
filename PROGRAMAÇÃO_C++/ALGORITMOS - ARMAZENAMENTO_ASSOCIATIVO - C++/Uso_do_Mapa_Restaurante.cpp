#include <iostream>
#include <map>
#include <string>
#include <limits>
#include <stdlib.h>
using namespace std;

struct Restaurante {
    string descprato;
    string ingredprato;
};

int main() {
    int chave, opcao;
    map<int, Restaurante> MapaPratos;
    Restaurante pratos;

    do {
        system("cls");
        cout << "Selecione uma opcao:\n";
        cout << "1 - Adicionar um Prato\n";
        cout << "2 - Remover um Prato\n";
        cout << "3 - Listar todos os Pratos\n";
        cout << "4 - Sair\n";
        cin >> opcao;
        cin.ignore(); // limpa o buffer do enter

        switch (opcao) {
        case 1:
            system("cls");
            cout << "Adicionar novo prato\n";
            cout << "Informe o nome do prato: ";
            getline(cin, pratos.descprato);

            cout << "Informe os ingredientes do prato: ";
            getline(cin, pratos.ingredprato);

            // Gera próxima chave única (busca a menor chave disponível)
            chave = 1;
            while (MapaPratos.count(chave)) {
                chave++;
            }
            MapaPratos[chave] = pratos;

            cout << "\nPrato adicionado com sucesso!\n";
            cout << "Prato: " << pratos.descprato << "\n";
            cout << "Ingredientes: " << pratos.ingredprato << "\n";
            system("pause");
            break;

        case 2:
            system("cls");
            cout << "Informe o numero do prato para remover: ";
            cin >> chave;

            if (MapaPratos.find(chave) == MapaPratos.end()) {
                cout << "Prato nao existente!\n";
            } else {
                MapaPratos.erase(chave);
                cout << "Prato removido com sucesso!\n";
            }
            system("pause");
            break;

        case 3:
            system("cls");
            cout<<("*** Listagem dos pratos! ***\n");
            for (int i = 1; i <= (int)MapaPratos.size(); i++) {
                cout<<("Prato %d: ", i);
                if (MapaPratos.find(i) == MapaPratos.end()) {
                    cout << "Prato nao encontrado!\n" << endl;
                } else {
                    cout << "\nNome: " << MapaPratos[i].descprato
                         << "\nIngrediente: " << MapaPratos[i].ingredprato << "\n" << endl;
                }
            }
            system("pause");
            opcao = 0;
            break;

        case 4:
            cout << "Saindo...\n";
            break;

        default:
            cout << "Opcao invalida!\n";
            system("pause");
            break;
        }

    } while (opcao != 4);

    return 0;
}