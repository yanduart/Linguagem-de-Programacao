#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
    int x = 10;
    int *p;
    
    p = &x;
    
    printf("Vari�vel x: %d\n", x);
     printf("Endere�o Vari�vel x: %d\n", &x);
      printf("Endere�o Vari�vel p: %d\n", p);
      printf("Vari�vel *p: %d\n", *p);
	
	  *p = 2024;
    
       printf("\n\n\n");
       
       printf("Vari�vel x: %d\n", x);
        printf("Vari�vel *p: %d\n", *p);
        
        
	
	return 0;
}