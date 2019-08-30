#include <stdio.h>
#include <stdlib.h>

int ant(int x){
	x=x-1;
	return (x);
}

int main(){
	int n,t;
	printf("Qual o valor?\n");
	scanf("%d",&n);	
	t=ant(n);
	printf("Valor: %d\nValor antecessor:%d\n",n,t);
	system("PAUSE");
}

