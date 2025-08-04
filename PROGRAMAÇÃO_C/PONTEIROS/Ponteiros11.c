#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	
    int vet[5] = {1,0,23,11,40};
    int *p = vet;
    int i;
    for(i=0; i<5; i++){
		printf("Valor: %d\n", &vet[i]);
	}
	
	return 0;
	
}