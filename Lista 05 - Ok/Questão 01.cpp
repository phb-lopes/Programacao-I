#include <stdio.h>
#include <stdlib.h>

int main(){
	float x1,x2,x3;
	float j;
	printf("Valor?\n");
	scanf("%f",&x1);
	printf("Valor?\n");
	scanf("%f",&x2);
	printf("Valor?\n");
	scanf("%f",&x3);
	j=((x1*x1)+(x2*x2)+(x3*x3));
	printf("Total: %f\n",j);
	system("PAUSE");
}

