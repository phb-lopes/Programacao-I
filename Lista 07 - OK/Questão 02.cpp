#include <stdio.h>
#include <stdlib.h>
#define x 5
int main(){
	int i,j;
	int cont4=0,cont2,contp=0,cont=0;

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
	
	for(i=0;i<x;i++){
		for(j=0;j<x;j++){
			cont = cont + v1[i][j];
			if(i == 3){
				cont4 = cont4 + v1[i][j];
			}
			if(i==j)
				contp = contp + v1[i][j];
		}
		cont2 = cont2 + v1[i][1];
	}
	
	printf("\nSoma da linha 4: %d\n",cont4);
	printf("Soma da Coluna 2: %d\n",cont2);
	printf("Soma da Diagonal principal %d\n",contp);
	printf("Soma de todos os Numeros: %d\n",cont);
	system("PAUSE");
} 
