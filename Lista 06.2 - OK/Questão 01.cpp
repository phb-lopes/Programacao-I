#include <stdio.h>
#include <stdlib.h>
#define X 5

int main(){
	int i,v1[X],v2[X],v3[X];
	int cont=0,j=0;
	
	for(i=0;i<X;i++){
		printf("Valor:%d?\n",i+1);
		scanf("%d",&v1[i]);	
		if(v1[i] == 0){
			cont++;
		}else{
			v2[j]=v1[i];
			j++;
		}
	}
	while(cont!=0){
		v2[j] = 0;
		j++;
		cont--;
	}
	
	for(i=0;i<X;i++){
		printf("Vetor 01:%d\n",v1[i]);
	}
	
	printf("-------------------------------------------\n");
	
	for(i=0;i<X;i++){
		printf("Vetor 02:%d\n",v2[i]);
	}
	
	system("PAUSE");
} 
