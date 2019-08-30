#include <stdio.h>
#include <stdlib.h>

int main(){
	float x1,x2,j;
	printf("Km?\n");
	scanf("%f",&x1);
	printf("Litros de Gasolina?\n");
	scanf("%f",&x2);
	j = x1/x2;
	if(j<8)
	printf("Venda o Carro\n");
	if(j>8 && j<14)
	printf("Economico\n");
	if(j>14)
	printf("Super economico\n");
	system("PAUSE");
}

