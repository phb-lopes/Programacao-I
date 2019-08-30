#include <stdio.h>
#include <stdlib.h>
#define X 100
int main(){
	int i,x1[X];
	float m=0,mp=0,mi=0,qp=0,qi=0;
	
	for(i=0;i<X;i++){
	printf("Valor?\n");
	scanf("%d",&x1[i]);
	
	if(x1[i] % 2 == 0){
		mp=mp+x1[i];
		qp++;
	}
	else{
		mi=mi+x1[i];
		qi++;
	}
	m=m+x1[i];
	}
	mp=mp/X;
	mi=mi/X;
	m=m/X;
	printf("Quantidade de numeros pares:%.2f\nQuantidade de numeros impares:%.2f\nMedia dos numeros Pares:%.2f\n",qp,qi,mp);
	printf("Media dos numeros impares:%.2f\nMedia Geral:%.2f\n",mi,m);
	system("PAUSE");
}

