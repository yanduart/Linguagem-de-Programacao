#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	
   int vet[5] = {10, 20, 30, 40, 50};
   int *p = vet;
   int i;
   for(i=0; i<5; i++){
	   printf("Conteúdo: %d\n", p[i]);
   }
  
	return 0;
}