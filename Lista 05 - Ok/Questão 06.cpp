#include <stdio.h>
#include <stdlib.h>

int main(){
	int x1,cont=0,maior=0,i,v;
	
	printf("Quantidade de numeros?\n");
	scanf("%d",&x1);
	
	for(i=0;i<x1;i++){
		
		printf("Numero?\n");
		scanf("%d",&v);
		
		if(maior<v){
			maior = v;
		}
		
		if(maior == v){
			cont++;
		}
		
	}
	printf("Maior valor:%d\nQuantidade:%d\n",maior,cont);
	system("PAUSE");
}

