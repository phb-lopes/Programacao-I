#include <stdio.h>
#include <stdlib.h>
#define X 5

int main(){
	int i,v1[X],v2[X],v3[X];
	int b,n,s;
	
	for(i=0;i<X;i++){
		printf("Valor:%d?\n",i+1);
		scanf("%d",&v1[i]);	
	}
	printf("-------------------------------------------\n");
	for(i=0;i<X;i++){
		printf("Valor:%d?\n",i+1);
		scanf("%d",&v2[i]);	
	}
 	
	int j=0;
	for(i=X-1;i>=0;i--){
		v3[i]=v1[j];
		j++;
	}
	
	j=0;
	
	for(i=X-1;i>=0;i--){
		v1[i]=v2[j];
		j++;
	}
	
	for(i=X-1;i>=0;i--){
		v2[i]=v3[i];
	}
	
	for(i=0;i<X;i++){
		printf("Vetor 01 - Valor:%d\n",v1[i]);
	}
	printf("---------------------------------\n");
	for(i=0;i<X;i++){
		printf("Vetor 02 - Valor:%d\n",v2[i]);
	}
	
	system("PAUSE");
} 
