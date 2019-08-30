#include <stdio.h>
#include <stdlib.h>

int main(){
	int i,k,cont=0,j=0;
	int v2[10];
	
	for(i=100;i<=200;i++){
		
		for(k=1;k<=i;k++){
			if( i % k == 0 ){
				cont++;
			}	
		}
		
		if(cont == 2){
			v2[j] = i;
			printf("Primo:%d\n",i);	
			j++;
		}
		cont = 0;
	}

	for(i=0;i<10;i++){
		printf("%d\n",v2[i]);
	}
	system("PAUSE");
} 
