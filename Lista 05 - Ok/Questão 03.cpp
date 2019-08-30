#include <stdio.h>
#include <stdlib.h>

int main(){
	float x1,x2,x3,x4;
	float j;
	printf("Valor?\n");
	scanf("%f",&x1);
	x2 = (x1*0.10) - x1;
	x2 = x2 *(-1);
	x3 = x1/3;
	x4 = x2*0.05;
	j = x1*0.05;
	printf("Total do produto: %.2f\nTotal com desconto de 10%: %.2f\n",x1,x2);
	printf("Total da parcela em 3x: %.2f\nValor de Comissao do vendedor na venda a vista:%.2f\nComissao do valor parcelado:%.2f\n",x3,x4,j);
	system("PAUSE");
}

