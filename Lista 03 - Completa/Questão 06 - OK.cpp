#include <stdio.h>
#include <stdlib.h>

int main(){
	int x;
	
	printf("Valor?\n");
	scanf("%d",&x);
	
	for(int i=1;i<=20;i++){
		x=x+1;
		printf("Total: %d\n",x);
	}
	
	system("PAUSE");
}

