#include <iostream>
#include <cstring>
using namespace std;
int main(){
 char palavra[15], subs[15];
 cout << "Digite uma palavra: " << endl;
 cin.getline(palavra,25);
 cout << "Digite uma substring: " << endl;
 cin.getline(subs,25);
 if (strstr(palavra,subs))
 cout << "Existe a substring : " << subs << " em " <<palavra << endl;
 else
 cout << "Não existe a substring : " << subs << " em " <<palavra << endl;
 cout << palavra << " " << subs << endl;
 return 0;
}
