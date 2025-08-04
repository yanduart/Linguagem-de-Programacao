#include <iostream>
#include <windows.h>
#include <ctime>
#include <string>
using namespace std;

// Fun��o para definir a cor do texto e do fundo no console
void setColor(int texto, int fundo) {
	
	// Obt�m o console padr�o!
	// Obt�m uma refer�ncia ao console do Windows para que possamos modificar suas propriedades (como cor).
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    
    // Define a cor do texto e do fundo!
    // fundo << 4 desloca o c�digo de cor do fundo quatro posi��es para a esquerda (necess�rio para a fun��o do Windows).
    //texto combina o c�digo do fundo e do texto.
    SetConsoleTextAttribute(console, (fundo << 4) | texto);
}

// Fun��o para gerar uma cor aleat�ria
int FcAleatorio() {
    return rand() % 15 + 1;  // Gera um n�mero entre 1 e 15 para a cor do texto
}

int main() {
    setlocale(LC_ALL, "portuguese");
    srand(time(NULL));

    int fundo;
    cout << "Informe um valor para o fundo (0 a 15): ";
    cin >> fundo;
    cin.ignore();  // Ignora o '\n' deixado no buffer ap�s `cin >> fundo`

    char nome[100];
    int corTexto = 1;  // Cor inicial para o texto

    // Loop para receber v�rios nomes e alterar a cor a cada entrada
    while (true) {
        setColor(corTexto, fundo);
        cout << "Digite um nome (ou digite 'sair' para encerrar): ";
        cin.getline(nome, 100);

        // Verifica se o usu�rio digitou "sair"
        if (string(nome) == "sair") {
            break;
        }

        cout << "Nome digitado: " << nome << endl;

        // Define uma nova cor aleat�ria para o texto
        corTexto = FcAleatorio();
        
    }

    // Restaura a cor padr�o do console
    setColor(7, 0);
    cout << "Programa encerrado." << endl;

    return 0;
}