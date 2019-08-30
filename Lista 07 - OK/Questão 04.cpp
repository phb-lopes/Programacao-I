#include <stdio.h>
#include <stdlib.h>
#define A 3
int main(){
	int i,j;

	int v1[A][A];
	for(i=0;i<A;i++){
		for(j=0;j<A;j++){
			printf("Numero?\n");
			scanf("%d",&v1[i][j]);
		}
	}
	system("cls");
	printf("Matriz\n");
	int menor;
	
	for(i=0;i<A;i++){
		for(j=0;j<A;j++){
			printf("%d\t",v1[i][j]);
		}
		printf("\n");
	}
	printf("-----------------------------\n");
	int k,p;
	
	
	for(i=0;i<A;i++){
		if(i==0){
			menor = v1[i][A-1];
		}else {
			if(v1[i][(A-1)-i]< menor){
			menor = v1[i][(A-1)-i];
			k = i;
			p = (A-1)-i;
		}
		}
	}
	
	printf("Menor numero: %d Posicao: [%d][%d]\n",menor,k+1,p+1);
	
	system("PAUSE");
} 
