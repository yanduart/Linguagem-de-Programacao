#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	
   void *ponteiroG;
   int elemento = 2024;
   
   ponteiroG = &elemento;
   printf("Conte�do: %d \n",ponteiroG); // ERROR!
   printf("Conte�do: %d \n", *(int*)ponteiroG);
  
	return 0;
}