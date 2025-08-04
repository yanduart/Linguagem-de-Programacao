#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	int *p, notaMedia = 10;
	p = &notaMedia;
	
	printf("Origem - Variável p: %d\n", p);
	p++;
	printf("Adição - Variável p: %d\n", p);
	p = p + 10;
	printf("Subtração - Variável p: %d\n", p);
	p = p - 2;
	printf("Variável p: %d\n", p);
	
	return 0;
	
}