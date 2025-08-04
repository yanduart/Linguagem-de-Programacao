#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	
  int *p, *k, x = 10, y = 20;
  
  p = &x;
  k = &y;
  
  if(p==k){
	  printf("Ponteiro iguais");
  }else{
	  printf("Ponteiros Diferentes");
  }
	
	return 0;
	
}