#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	
    int vet[5] = {1,0,23,11,40};
    int *p = vet;
    
    printf("Endere�o do vet: %d\n", p);
    printf("Conte�do do vet[2]: %d\n", p[2]);
	printf("Endere�o do vet[2]: %d\n", &p[2]);
	printf("Endere�o do vet[2]: %d\n", (vet+2));
	return 0;
	
}