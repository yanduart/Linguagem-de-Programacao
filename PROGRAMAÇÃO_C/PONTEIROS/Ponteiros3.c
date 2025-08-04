#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	int *p, *k, x = 10;
	float notaFinal = 59.5;
	
	p = &x;
	printf("Variável *p: %d\n", *p);
	
	k = p;
	printf("Variável *k: %d\n", *k);
	
	return 0;
	
}