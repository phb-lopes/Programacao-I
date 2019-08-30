#include <stdio.h>
#include <stdlib.h>
#define A 3
int main(){
	int i,j,a;
	int v1[A][A],v2[9];
	
	for(i=0;i<A;i++){
		for(j=0;j<A;j++){
			printf("Numero?\n");
			scanf("%d",&v1[i][j]);
		}
	}
	system("cls");
	printf("Valor?\n");
	scanf("%d",&a);
	system("cls");
	printf("Vetor:\n");
	for(i=0;i<A;i++){
		for(j=0;j<3;j++){
		v2[j] = v1[i][j]*a;
		printf("%d\n",v2[j]);
		}
		
	}	
	system("PAUSE");
} 
