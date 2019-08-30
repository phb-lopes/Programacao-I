#include <stdio.h>
#include <stdlib.h>

int main(){
	int x1,i,s=0;
	
	printf("Valor?\n");
	scanf("%d",&x1);
	
	for(i=1;i<x1;i++){
		if(x1 % i == 0){
			s = s+i;
		}		
	}
	printf("Soma dos numeros: %d\n",s);
	system("PAUSE");
}

