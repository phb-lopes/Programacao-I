#include <stdio.h>
#include <stdlib.h>
#define X 6

int main(){
	int d[X][X]={0,400,300,250,150,100,400,0,100,250,300,350,300,100,0,200,250,280,250,250,200,0,300,380,150,300,250,300,0,50,100,350,280,380,50,0};
	int v[X], soma=0, i;
	//={1,3,2,4,5,0}
	
	printf("Insira seus valores de Distancia\n");
	for(int i=0;i<X;i++){
		printf("Insira o indice %d:\n",i+1);
		scanf("%d",&v[i]);
		if(i>0){
			while(v[i]==v[i-1]){
			printf("Indice invalido\n");
			printf("Insira o indice %d:\n",i+1);
			scanf("%d",&v[i]);
			}
		}
	}
	
	for(i=0;i<X-1;i++){
		soma = soma + d[v[i]][v[i+1]];
	}
	printf("Distancia percorrida = %d\n",soma);
	system("PAUSE");
} 
