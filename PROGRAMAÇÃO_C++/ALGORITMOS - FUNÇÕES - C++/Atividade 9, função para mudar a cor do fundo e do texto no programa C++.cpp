#include <iostream>
#include <windows.h>
#include <ctime>
#include <string>
using namespace std;

// Função para definir a cor do texto e do fundo no console
void setColor(int texto, int fundo) {
	
	// Obtém o console padrão!
	// Obtém uma referência ao console do Windows para que possamos modificar suas propriedades (como cor).
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    
    // Define a cor do texto e do fundo!
    // fundo << 4 desloca o código de cor do fundo quatro posições para a esquerda (necessário para a função do Windows).
    //texto combina o código do fundo e do texto.
    SetConsoleTextAttribute(console, (fundo << 4) | texto);
}

// Função para gerar uma cor aleatória
int FcAleatorio() {
    return rand() % 15 + 1;  // Gera um número entre 1 e 15 para a cor do texto
}

int main() {
    setlocale(LC_ALL, "portuguese");
    srand(time(NULL));

    int fundo;
    cout << "Informe um valor para o fundo (0 a 15): ";
    cin >> fundo;
    cin.ignore();  // Ignora o '\n' deixado no buffer após `cin >> fundo`

    char nome[100];
    int corTexto = 1;  // Cor inicial para o texto

    // Loop para receber vários nomes e alterar a cor a cada entrada
    while (true) {
        setColor(corTexto, fundo);
        cout << "Digite um nome (ou digite 'sair' para encerrar): ";
        cin.getline(nome, 100);

        // Verifica se o usuário digitou "sair"
        if (string(nome) == "sair") {
            break;
        }

        cout << "Nome digitado: " << nome << endl;

        // Define uma nova cor aleatória para o texto
        corTexto = FcAleatorio();
        
    }

    // Restaura a cor padrão do console
    setColor(7, 0);
    cout << "Programa encerrado." << endl;

    return 0;
}