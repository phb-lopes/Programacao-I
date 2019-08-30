#include <stdio.h>
#include <stdlib.h>
#define A 2
#define B 3
int main(){
	int i,j;
	int v1[A][B],v2[B][A],c[A][B];
	
	printf("Insira numeros na Matriz 01\n");
	for(i=0;i<A;i++){
		for(j=0;j<B;j++){
			printf("Numero\n");
			scanf("%d",&v1[i][j]);
		}
	}
	printf("Insira numeros na Matriz 02\n");
	for(i=0;i<B;i++){
		for(j=0;j<A;j++){
			printf("Numero\n");
			scanf("%d",&v2[i][j]);
		}
	}
	for(i=0;i<A;i++){
		for(j=0;j<B;j++){
			c[i][j]=v1[i][j]*v2[j][i];
		}
	}
	system("cls");
	
	printf("Matriz 01:\n");
	for(i=0;i<A;i++){
		for(j=0;j<B;j++){
			printf("%d\t",v1[i][j]);
			}
		printf("\n");
	}
	printf("Matriz 02:\n");
	for(i=0;i<B;i++){
		for(j=0;j<A;j++){
			printf("%d\t",v2[i][j]);
			}
		printf("\n");
	}	
	printf("Multiplicacao\n");
	for(i=0;i<A;i++){
		for(j=0;j<B;j++){
			printf("%d\t",c[i][j]);
			}
		printf("\n");
	}
	system("PAUSE");
} 
