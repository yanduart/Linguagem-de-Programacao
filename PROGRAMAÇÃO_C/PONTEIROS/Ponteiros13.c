#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	
   int *p, *k, x = 10, y = 20;
   
   p = &x;
   k = &y;
   
   if(p>k){
	   printf("Endere�o do p > k: %d > %d \n", p, k);
   }else{
	   printf("Endere�o do p <= k: %d > %d \n", p, k);
   }
	
	return 0;
	
}