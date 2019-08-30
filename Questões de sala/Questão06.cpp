#include <stdio.h>
#include <stdlib.h>

int main(){
	float a;
	int b;
	printf("Altura?\n");
	scanf("%f",&a);
	printf("Genero?\n1 - Homem\n2 - Para mulher\n");
	scanf("%d",&b);
	if( b == 1){
		a=(72.2*a)-58;
		printf("Peso ideal para o homem:%.2f\n",a);
	}
	if(b==2){
		a=(62.1*a)-44.7;
		printf("Peso ideal para a mulher:%.2f\n",a);
	}
	system("PAUSE");
}
