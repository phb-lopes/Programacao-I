#include <stdio.h>
#include <stdlib.h>

int main(){
	int x,j=0;
	for(int i=0;i<20;i++){
		printf("Valor?\n");
		scanf("%d",&x);
		j=j+x;
		}
	printf("Total: %d\n",j);
	system("PAUSE");
}

