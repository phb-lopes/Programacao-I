#include <stdio.h>	//Questão 02
#include <stdlib.h>

int main(){
	float x,y,salario;
	char n[20];
	printf("Qual o nome\n");
	scanf("%s",&n);
	printf("Qual o valor do salario\n");
	scanf("%f",&x);
	printf("Qual o numero de dependentes\n");
	scanf("%f",&y);
	
	if(x<500){
		salario = (x - (x*0.07))+(-15*y)+ 140;
		printf("Salario final com 7%  :%.2f",salario);
	}
	if(x>500 && x<900){
		salario = (x - (x*0.09))+(15*y)+ 140;
		printf("Salario final com 9% :%.2f",salario);
	}
	
	if(x>900){
		salario = (x - (x*0.11))+(15*y)+ 140;
		printf("Salario final com 11% :%.2f",salario);
	}
	
	
	system("PAUSE");
}
