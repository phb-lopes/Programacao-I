#include <stdio.h>
#include <stdlib.h>

int main(){
	int i,x,maior=0,menor=0,n=0;
	
	printf("Quantos valores?\n");
	scanf("%d",&x);
	
	for(i=1;i<=x;i++){
		printf("Valor?\n");
		scanf("%d",&n);
		if(i == 1){
		menor = n;
		maior = n;	
		}
		if(n>maior){
			maior= n;
		}
		if(n<menor){
			menor = n;
		}
	}
	printf("Maior: %d\nMenor: %d\n",maior,menor);
	system("PAUSE");
}

