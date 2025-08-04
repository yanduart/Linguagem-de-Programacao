#include <iostream>
#include <cstring>
#include <locale>
using namespace std;

int main() {
setlocale(LC_ALL,"portuguese");

    char text[80];
    int tam = 0;
    int contador = 0;       // Contador de caracteres n�o-espaciais
    int contadorNumeros = 0; // Contador de caracteres num�ricos
    int contadorMinusculos = 0; // Contador de letras min�sculas

    cout << "Informe um texto: " << endl;
    cin.getline(text, 80);

    tam = strlen(text);

    for (int i = 0; i < tam; i++) {
        // Contar caracteres n�o-espaciais
        if (text[i] != ' ') {
            contador++;
        }

        // Contar caracteres num�ricos (caracteres de '0' a '9')
        if (text[i] >= '0' && text[i] <= '9') {
            contadorNumeros++;
        }

        // Contar letras min�sculas (caracteres de 'a' a 'z')
        if (text[i] >= 'a' && text[i] <= 'z') {
            contadorMinusculos++;
        }
    }

    cout << "Quantidade de caracteres (não-espaciais): " << contador << endl;
    cout << "Quantidade de caracteres numéricos: " << contadorNumeros << endl;
    cout << "Quantidade de letras minúsculas: " << contadorMinusculos << endl;

    return 0;
}