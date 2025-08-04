#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
    int x = 10;
    int *p;
    
    p = &x;
    
    printf("Variável x: %d\n", x);
     printf("Endereço Variável x: %d\n", &x);
      printf("Endereço Variável p: %d\n", p);
      printf("Variável *p: %d\n", *p);
	
	  *p = 2024;
    
       printf("\n\n\n");
       
       printf("Variável x: %d\n", x);
        printf("Variável *p: %d\n", *p);
        
        
	
	return 0;
}