#include <stdio.h>
#include <stdlib.h>
#define X 15
int main(){
	int i,v[X];
	int x1,x2,m;
	
	for(i=0;i<X;i++){
		printf("Valor?\n");
		scanf("%d",&v[i]);	
	}
	printf("Valor 1?\n");
	scanf("%d",&x1);
	printf("Valor 2?\n");
	scanf("%d",&x2);
	x1=x1-1;
	x2=x2-1;
	m=v[x1]+v[x2];
	printf("Soma:%d\n",m);
	
	system("PAUSE");
}

