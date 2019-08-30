#include <stdio.h>
#include <stdlib.h>
#define X 5

int main(){
	int i,cont=0;
	char v1[140];
	printf("Twitte aqui:\n");
	gets(v1);
	
	for(i=0;i<=140;i++){
		if(v1[i] == ' ')
		cont++;
	}
	printf("Frase:\n%s\n",v1);
	printf("Palavras:%d\n",cont);
	system("PAUSE");
} 
