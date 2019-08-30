#include <stdio.h>	//Questão 02
#include <stdlib.h>

int main(){
	int x,y;
	float k;
	printf("Qual o Código do Pedido?\n");
	scanf("%d",&x);
	printf("Qual a quantidade\n");
	scanf("%f",&y);
	
	if(x<100){
		k = 1,20*y;
		printf("Total a pagar: %.2f",k);
	}
	if(x<101){
		k = 1,30*y;
		printf("Total a pagar: %.2f",k);
	}
	if(x<102){
		k = 1,50*y;
		printf("Total a pagar: %.2f",k);
	}
	if(x<103){
		k = 1,20*y;
		printf("Total a pagar: %.2f",k);
	}
	if(x<104){
		k = 1,30*y;
		printf("Total a pagar: %.2f",k);
	}
	if(x<105){
		k = 1,00*y;
		printf("Total a pagar: %.2f",k);
	}
	
	
	system("PAUSE");
}
