#include <iostream>
#include <cstring>
using namespace std;

int main() {
    setlocale(LC_ALL, "portuguese");
    char nome[50];
    char ch;
    int tam;
    int posicao = -1;  // Usado para armazenar a posição da primeira ocorrência

    cout << "Digite um nome: " << endl;
    cin.getline(nome, 50);

    cout << "Digite uma letra: " << endl;
    cin >> ch;

    tam = strlen(nome);

    for (int i = 0; i < tam; i++) {
        if (nome[i] == ch) {
            posicao = i;  // Armazena a posição da primeira ocorrência
            break;  // Para após encontrar a primeira ocorrência
        }
    }

    // Verifica se o caractere foi encontrado
    if (posicao != -1) {
        cout << "A primeira ocorrência do caractere '" << ch << "' ocorre em " << posicao << endl;
    } else {
        cout << "Não existe o caractere '" << ch << "' na string digitada." << endl;
        return 1;
    }

    return 0;
}