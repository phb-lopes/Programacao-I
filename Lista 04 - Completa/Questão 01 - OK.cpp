#include <stdio.h>
#include <stdlib.h>

int main(){
	int x,h=0,i,j=0;
	
	printf("Valor?\n");
	scanf("%d",&x);
	
	for(i=1;x>1;x--){
		h=x-i;
		j=j+h;
	}
	printf("Total: %d\n",j);
	system("PAUSE");
}

