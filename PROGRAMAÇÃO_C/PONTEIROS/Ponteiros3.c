#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	int *p, *k, x = 10;
	float notaFinal = 59.5;
	
	p = &x;
	printf("Vari�vel *p: %d\n", *p);
	
	k = p;
	printf("Vari�vel *k: %d\n", *k);
	
	return 0;
	
}