#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	int *p, notaMedia = 10;
	p = &notaMedia;
	
	printf("Origem - Vari�vel p: %d\n", p);
	p++;
	printf("Adi��o - Vari�vel p: %d\n", p);
	p = p + 10;
	printf("Subtra��o - Vari�vel p: %d\n", p);
	p = p - 2;
	printf("Vari�vel p: %d\n", p);
	
	return 0;
	
}