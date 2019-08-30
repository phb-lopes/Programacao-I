#include <stdio.h>
#include <stdlib.h>

int main(){
	int x,s,s1,s2;
	do{
		printf("Digite:\n");
		printf("1 - Adicao\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n5 - Saida\n");
		scanf("%d",&x);
		if(x == 1){
		printf("Valor?\n");
		scanf("%d",&s1);
		printf("Valor?\n");
		scanf("%d",&s2);
		s=s1+s2+s;
		}
		
	}while(x !=5);
	printf("Valores somados:%d\n",s);
	system("PAUSE");
}

