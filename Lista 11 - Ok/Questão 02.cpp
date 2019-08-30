#include <stdio.h>
#include <stdlib.h>
#define x 4
int v[x];
int store(int v[x]){
	int i;
	for(i=0;i<x;i++){
		printf("Valor %d\n",i+1);
		scanf("%d",&v[i]);
	}
	return(v[x]);
}



void show(int v[x]){
	int i;
	for(i=0;i<x;i++){
		printf("%d\n",v[i]);
	}
}

int eqvalue(int n){
	int i,cont=0;	
	int pos=v[0],posi=0;
	for(i=0;i<x;i++){
		if(n == v[i]){
			cont++;
			pos=i;
			if(cont>1){
				pos=i;
			}		
		}
	}
	printf("Maior posicao:%d\n",pos+1);
	return(cont);
}

int main(){
	int n,j;
	store(v);
	system("cls");
	printf("Valor a ser pesquisado?\n");
	scanf("%d",&n);
	j=eqvalue(n);
	printf("O numero %d Apareceu %d vezes\n",n,j);
	show(v);
	system("PAUSE");
}

