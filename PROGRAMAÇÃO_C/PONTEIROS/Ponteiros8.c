#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	
   void *ponteiroG;
   int elemento = 2024;
   
   ponteiroG = &elemento;
   printf("Conteúdo: %d \n",ponteiroG); // ERROR!
   printf("Conteúdo: %d \n", *(int*)ponteiroG);
  
	return 0;
}