#include <stdio.h>
#include <stdlib.h>

int main(){
	int x1,x2,i,s=0,s1=1;
	
	printf("Valor 1?\n");
	scanf("%d",&x1);
	printf("Valor 2?\n");
	scanf("%d",&x2);
	
	for(i=x1;i<=x2;i++){
		if(i%2 == 0){
			s = s+i;
		}
		if(i%2 == 1){
			s1 = s1*i;
		}
		
	}
	printf("Soma dos numeros pares: %d\n",s);
	printf("Multiplicacao dos numeros impares: %d\n",s1);
	system("PAUSE");
}

