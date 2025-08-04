#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char nome1[50], nome2[50], nome3[50], nome4[50] = {0};
    
    cout << "Digite um nome: " << endl;
    cin.getline(nome1, 50);

    // Copiando nome1 para nome2
    strcpy(nome2, nome1);

    // Copiando os primeiros 7 caracteres de nome1 para nome3
    strncpy(nome3, nome1, 7);
    
    nome3[7] = '\0'; // Garantir que nome3 tenha uma terminação nula

    cout << "Usando comandos de cópias de strings:" << endl;
    cout << nome1 << endl << nome2 << endl << nome3 << endl;

    return 0;
}