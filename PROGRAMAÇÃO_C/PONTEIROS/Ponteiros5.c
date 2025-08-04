#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	
    int *p, notaMedia = 10;
    char *k, letra = 'F';
    
    p = &notaMedia;
    k = &letra;
    
    printf("Origem - Variável p e k: %d e %d \n", p, k);
    p++;
    k--;
    printf("Adição - Variável p e k: %d e %d \n", p, k);
    p--;
    k--;
    printf("Subtração - Variável e k: %d e %d \n", p, k);
	
	return 0;
	
}