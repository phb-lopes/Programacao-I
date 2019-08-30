#include <stdio.h>
#include <stdlib.h>

int main(){
	int x,j;
	
	printf("Valor?\n");
	scanf("%d",&x);
	
	if(x==0){
		printf("Total: 1\n");
	}
	
	if(x<0){
		printf("Numero invalido\n");
		printf("Valor?\n");
		scanf("%d",&x);	
		while(x<0){
			printf("Numero invalido\n");
			printf("Valor?\n");
			scanf("%d",&x);	
			if(x>0){
				for(j=1;x>1;x=x-1){
				j=j*x;
				}
				printf("Total: %d\n",j);	
			}
		}
	}
	
	else if(x>0){
		for(j=1;x>1;x=x-1){
		j=j*x;
		}
		printf("Total: %d\n",j);	
	}
	
	system("PAUSE");
}

