#include <stdio.h>
#include <stdlib.h>

int main(){
	int i,j,A,s=0;
	
	printf("Qual o valor da Matriz quadrada?\n");
	scanf("%d",&A);
	
	int v1[A][A],v2[A];
	
	for(i=0;i<A;i++){
		for(j=0;j<A;j++){
			printf("Numero?\n");
			scanf("%d",&v1[i][j]);
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
	
	for(i=0;i<A;i++){
		for(j=0;j<A;j++){
			if(j>i){
				s=s+v1[i][j];
			}
		}
	}
	printf("Soma %d\n",s);
	system("PAUSE");
} 
