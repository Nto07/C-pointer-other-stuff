#include <stdio.h>

int calcul(int c, int d){

int result = c + d; 
return result;
}


int main (void){

int a = 1;
int b = 1;

int resulta = calcul(a, b);

printf("%d\n", resulta);

int e = 10;
int *f = &e;

printf("e = %d, f = %d\n", e, *f);

int g = 2;
int h = 1;

int *i = &h;
int *j = &g;

printf("g = %d, h = %d ==> g = %d, h = %d", g, h , *i, *j);
	

return 0;
}


