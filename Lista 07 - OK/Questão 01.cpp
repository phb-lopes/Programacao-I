#include <stdio.h>
#include <stdlib.h>

int main(){
	int i,j;
	int cont=0;
	int x;
	printf("Tamanho da Matriz?\n");
	scanf("%d",&x);
	int v1[x][x];
	for(i=0;i<x;i++){
		for(j=0;j<x;j++){
			printf("Numero?\n");
			scanf("%d",&v1[i][j]);
		}
	}
	system("cls");
	printf("Matriz\n");
	
	for(i=0;i<x;i++){
		for(j=0;j<x;j++){
			printf("%d\t",v1[i][j]);
		}
		printf("\n");
	}
	
	for(j=0;j<x;j++){
		for(i=0;i<x;i++){
		cont = cont + v1[i][j];
		}
		printf("Soma da coluna %d:%d\n",j+1,cont);
		cont = 0;
	}
	
	system("PAUSE");
} 
