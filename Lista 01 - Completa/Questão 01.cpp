#include <stdio.h>	// Questão 01
#include <stdlib.h>

int main(){
	float v,d,t;
	
	printf("Tempo em minutos?\n");
	scanf("%f",&t);
	printf("Distancia em km/h?\n");
	scanf("%f",&d);
	v=d/t;
	printf("Velocidade media:%.1f\n",v);
	system("PAUSE");
}
