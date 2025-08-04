#include <iostream>
#include <cstring>
using namespace std;
int main (){
setlocale(LC_ALL,"portuguese");
char nome[50];
cout << "Digite um nome: " << endl;
cin.getline(nome,50);
cout << "O nome armazenado é :" << nome << " que tem " \
<< strlen(nome) << " caracteres." << endl;
return 0;
}
