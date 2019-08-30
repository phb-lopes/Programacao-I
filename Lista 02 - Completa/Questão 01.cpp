#include <stdio.h>	// Questão 01
#include <stdlib.h>

int main(){
	int x;
	printf("Quaal a idade do nadador\n");
	scanf("%d",&x);
	if(x<5){
		printf("Categoria inválida\n");
	}
	if(x<0){
		printf("Idade inválida\n");
	}
	if(x>5 && x<8){
		printf("Infatil A\n");
	}
	if(x>8 && x<10){
		printf("Infantil B\n");
	}
	if(x>11 && x<13){
		printf("Juvenil A\n");
	}
	if(x>14 && x<17){
		printf("Juvenil B\n");
	}
	if(x>18){
		printf("Adulto\n");
	}
	system("PAUSE");
}
