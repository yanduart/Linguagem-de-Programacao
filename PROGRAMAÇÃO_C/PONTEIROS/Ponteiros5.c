#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	
    int *p, notaMedia = 10;
    char *k, letra = 'F';
    
    p = &notaMedia;
    k = &letra;
    
    printf("Origem - Vari�vel p e k: %d e %d \n", p, k);
    p++;
    k--;
    printf("Adi��o - Vari�vel p e k: %d e %d \n", p, k);
    p--;
    k--;
    printf("Subtra��o - Vari�vel e k: %d e %d \n", p, k);
	
	return 0;
	
}