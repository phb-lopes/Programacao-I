#include <stdio.h>
#include <stdlib.h>

int main(){
	int x1,x2;
	printf("Idade?\n");
	scanf("%d",&x1);
	printf("Anos de trabalho?\n");
	scanf("%d",&x2);
	if(x1>65)
	printf("Trabalhador apto a se aposentar\n");
	if(x2>30)
	printf("Trabalhador apto a se aposentar\n");
	if(x1>65 && x2>30)
	printf("Trabalhador apto a se aposentar\n");
	if(x1<65 && x2<30)
	printf("Trabalhador nao apto a se aposentar\n");
	system("PAUSE");
}

