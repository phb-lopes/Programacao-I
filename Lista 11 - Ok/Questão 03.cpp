#include <stdio.h>
#include <stdlib.h>

int soma(int x){
	int v2[x],i,soma=0;
	for(i=0;i<x;i++){
		printf("Valor %d?\n",i+1);
		scanf("%d",&v2[i]);
		soma+=v2[i];
	}
	return (soma);
}

int main(){
	int n,i,t;
	printf("Quantos valores deseja somar?\n");
	scanf("%d",&n);	
	t=soma(n);
	printf("Valor total da soma:%d\n",t);
	system("PAUSE");
}

