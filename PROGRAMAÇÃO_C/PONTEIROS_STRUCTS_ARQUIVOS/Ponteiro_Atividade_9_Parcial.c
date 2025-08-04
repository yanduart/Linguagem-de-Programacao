#include <stdio.h>
int main(void){
	int *p, *q, a = 5, b = 12, c = 0;
	p = &a;
	q =  &b;
	printf("a: %d\n", a);
	printf("b: %d\n", b);
	b = *p - *q;
    printf("b: %d\n", b);
    c = *q;
    printf("*p: %d\n", *p);
    printf("*q: %d\n", *q);
    printf("c: %d\n", c);
    *q = *p;
    printf("*q: %d\n", *q);
    printf("a, b, c: %d, %d, %d\n", a, b, c);
    *p = c;
    printf("a, b, c: %d, %d, %d\n", a, b, c);
	return 0; 
}