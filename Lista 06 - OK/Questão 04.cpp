#include <stdio.h>
#include <stdlib.h>
#define X 5
int main(){
	int i,v1[X],v2[X],v3[10];
	int p=0,x1,j=0;
	
	for(i=0;i<X;i++){
		printf("Valor vetor 1?\n");
		scanf("%d",&v1[i]);		
	}
	printf("--------------------------\n");
	for(i=0;i<X;i++){
		printf("Valor vetor 2?\n");
		scanf("%d",&v2[i]);	
	}
	
	for(i=0;i<5;i++){
		v3[j]=v1[i];
		j++;
		v3[j]=v2[i];
		j++;
	}
	
	printf("Vetor resultante:\n");
	for(i=0;i<10;i++){
		printf("Valor :%d\n",v3[i]);
		
	}

	system("PAUSE");
}

