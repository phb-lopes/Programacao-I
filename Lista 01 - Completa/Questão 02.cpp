	#include <stdio.h>	// Questão 01
#include <stdlib.h>

int main(){
	int t;
	
	printf("Numero?\n");
	scanf("%d",&t);
	t=t+1;
	printf("Sucessor:%d\n",t);
	t=t-2;
	printf("Antecessor:%d\n",t);
	system("PAUSE");
}
