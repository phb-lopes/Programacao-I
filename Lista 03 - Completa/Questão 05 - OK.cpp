#include <stdio.h>
#include <stdlib.h>
int main(){
	int x,j;
	printf("Valor?\n");
	scanf("%d",&x);
	for(j=1;x>1;x=x-1){
		j=j*x;
	}
	printf("Total: %d\n",j);
	system("PAUSE");
}
