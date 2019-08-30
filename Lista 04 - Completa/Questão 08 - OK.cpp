#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i,cont=0,k;
	
	for(i=1;i<=100;i++){
		
		for(k=1;k<=i;k++){
			if( i % k == 0 ){
				cont++;
			}	
		}
		if(cont == 2){
			printf("Primo:%d\n",i);	
		}
		cont = 0;
	}
	system("PAUSE");
}
