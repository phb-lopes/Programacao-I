#include <stdio.h>
#include <stdlib.h>

int main(){
	float preco,total=0;
	char nome[50];
	int x,q;
	
	printf("Digite:\n 0 - Para parar Sair\n 1 - Cadastrar produtos\n");
	scanf("%d",&x);
	
	while(x>0){
	
		printf("Nome do produto:\n");
		scanf("%s",&nome);
		printf("Valor do produto:\n");
		scanf("%f",&preco);
		if(preco<0){
			printf("Valor invalido, tente novamente\n");
			scanf("%f",&preco);
			if(preco<0){
				while(preco<0){
					printf("Valor invalido, tente novamente\n");
					scanf("%f",&preco);
				}
			}
		}
		printf("Quantidade do produto:\n");
		scanf("%d",&q);
		total = total + (preco*q);
		printf(" 0 - Saber o valor total\n 1 - Cadastrar outro produto\n");
		scanf("%d",&x);
	}
	printf("Valor total dos produtos e: %.2f\n",total);
	
	system("PAUSE");
}

