#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	
   void *ponteiroG;
   int *ponteiroI, elemento = 2024;
   
   ponteiroI = &elemento;
   ponteiroG = &elemento;
   
   printf("Endereço em ponteiro6: %d \n", ponteiroG);
   ponteiroG = &ponteiroI;
   printf("Endereço em ponteiro6: %d \n", ponteiroG);
   ponteiroG == ponteiroI;
    printf("Endereço em ponteiro6: %d \n", ponteiroG);
  
	return 0;
}