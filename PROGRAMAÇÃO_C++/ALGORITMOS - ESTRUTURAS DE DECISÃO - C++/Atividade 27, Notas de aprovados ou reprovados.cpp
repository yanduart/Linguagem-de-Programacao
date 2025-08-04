#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char** argv) {
    setlocale(LC_ALL, "portuguese");

    int ID, nota1, nota2, nota3;
    float MA, ME;

    cout << "Informe o ID do aluno: " << endl;
    cin >> ID;

    cout << "Informe a primeira nota: " << endl;
    cin >> nota1;

    cout << "Informe a segunda nota: " << endl;
    cin >> nota2;

    cout << "Informe a terceira nota: " << endl;
    cin >> nota3;

    // Cálculo da média de exercícios e da média de aproveitamento
    ME = (nota1 + nota2 + nota3) / 3.0f;
    MA = (nota1 + nota2 * 2 + nota3 * 3 + ME) / 7.0f;

    // Saída com as faixas de notas corrigidas
    cout << "O ID do aluno é: " << ID << endl;
    cout << "Sua média de aproveitamento é: " << MA << endl;

    if (MA >= 90) {
        cout << "Nota A. Aprovado!" << endl;
    } else if (MA >= 75 && MA < 90) {
        cout << "Nota B. Aprovado!" << endl;
    } else if (MA >= 60 && MA < 75) {
        cout << "Nota C. Aprovado!" << endl;
    } else if (MA >= 40 && MA < 60) {
        cout << "Nota D. Reprovado." << endl;
    } else {
        cout << "Nota E. Reprovado." << endl;
    }

    system("pause");
    return 0;
}