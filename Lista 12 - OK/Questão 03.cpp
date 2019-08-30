#include <stdio.h>
#include <stdlib.h>

float res(int x,int y){
	float resto;
	resto = (y*(x/y));
	return(resto);
}
 
int main() {
     int x1,x2;
     printf("Valor 01?\n");
     scanf ("%d",&x1); 
     printf("Valor 02?\n");
     scanf("%d",&x2);       
     printf("\nResultado da divisao de %d / %d = %.1f\n",x1,x2,res(x1,x2));
     system("PAUSE");
}
