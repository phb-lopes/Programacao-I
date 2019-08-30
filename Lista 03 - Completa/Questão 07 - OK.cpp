#include <stdio.h>
#include <stdlib.h>

int main(){
	int x,y,j=0,i;
	printf("Valor inicial?\n");
	scanf("%d",&x);
	printf("Valor final?\n");
	scanf("%d",&y);
	x=x+1;
	for(i=x;i<y;i++){
		j=j+i;
	}
	printf("Total:%d\n",j);
	system("PAUSE");
}

