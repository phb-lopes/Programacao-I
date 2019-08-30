#include <stdio.h>
#include <stdlib.h>
#define t 5

int valida(int y){
	if(y<10){
		printf("Valor invalido\n");
		while(y<10){
			printf("Valor de Y?\n");
			scanf("%d",&y);	
		}
	}
	return(y);
	
}
int main(){
	int i,x,y,valor=0;
	
	printf("Valor de X?\n");
	scanf("%d",&x);
	printf("Valor de Y?\n");
	scanf("%d",&y);
	y=valida(y);
	
	for(i=1;i<=y;i++){
		valor+=(i*x);
		i++;
		x=x*(-1);
	}
	printf("Valor:%d\n",valor);
	system("PAUSE");
}
