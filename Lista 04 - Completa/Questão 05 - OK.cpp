#include <stdio.h>
#include <stdlib.h>

int main(){
	int x;
	
	printf("Valor?\n");
	scanf("%d",&x);
	
	for(int i=x+1;i<=x+20;i++){
		printf("Numero: %d\n",i);
	}
	system("PAUSE");
}

