#include <iostream>
#include <climits> 
using namespace std;

int main() {
setlocale(LC_ALL,"portuguese");
    double custodemo[10];
    double menor = INT_MAX;

    for (int i = 0; i < 10; i++) { 
        cout << "Informe a quantia de demolição: ";
        cin >> custodemo[i]; 

        if (custodemo[i] < menor) {	
            menor = custodemo[i];		 
        }
    }

    cout << "O menor custo de demolição do muro é: " << menor << endl;

    return 0;
}
