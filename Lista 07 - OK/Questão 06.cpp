#include <stdio.h>
#include <stdlib.h>
#define A 3
int main(){
	int i,j,a;
	int v1[A][A],v2[A];
	
	for(i=0;i<A;i++){
		for(j=0;j<A;j++){
			printf("Numero?\n");
			scanf("%d",&v1[i][j]);
			if(i==j){
				v2[j]=v1[i][j];
			}
		}
	}

	system("cls");

	printf("Matriz:\n");
	for(i=0;i<A;i++){
		for(j=0;j<A;j++){
			printf("%d\t",v1[i][j]);
			}
		printf("\n");
	}	
	
	printf("Matriz Multiplicada:\n");
	for(i=0;i<A;i++){
		for(j=0;j<A;j++){
			v1[i][j]=v1[i][j]*v2[i];
		}
	}	
	
	for(i=0;i<A;i++){
		for(j=0;j<A;j++){
			printf("%d\t",v1[i][j]);
		}
		printf("\n");
	}
	
	system("PAUSE");
} 
