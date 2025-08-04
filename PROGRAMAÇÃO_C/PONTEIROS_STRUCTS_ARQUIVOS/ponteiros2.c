#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  int x, *ptrx, **pptrx;
  
  //inicializando a variavel com zero
  x = 0;
  printf("\nvalor de x = %d\n", x);
  printf("Endereco de x: %x\n\n", &x);
  
  
  //Atribuindo os enderecos para os ponteiros
  ptrx = &x; // ptrx aponta para x
  pptrx = &ptrx; // pptrx aponta para ptrx    
    
    
  *ptrx = *ptrx + 10;
  printf("\nvalor de x = %d", x);
  printf("\nEndereco apontado por ptrx: %x\n",ptrx);
  printf("Valor da variavel X que esta sendo apontada por ptrx: %d\n",*ptrx);
  printf("Endereco de memoria da variavel ptrx %x\n",&ptrx); 
 
  **pptrx = **pptrx + 10;
  printf("\n\nvalor de x = %d", x);
  printf("\nEndereco apontado por **pptrx: %x",pptrx);
  printf("\nValor da variavel para a qual pptrx faz referencia: %d",**pptrx);
  printf("\nEndereco de memoria da variavel **pptrx %x\n\n",&pptrx);
  
  
  /*Um ponteiro em C é uma variável que armazena um endereço de memória, mas também pode ser usado para acessar o 
  conteúdo armazenado nesse endereço.*/
   
  return 0;
}