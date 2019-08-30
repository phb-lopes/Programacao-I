#include <stdio.h>
#include <stdlib.h>
#define X 15
int main(){
	int i,v[X];
	int p=0,x1;
	
	for(i=0;i<X;i++){
		printf("Valor?\n");
		scanf("%d",&v[i]);	
	}
	printf("Valor da procura?\n");
	scanf("%d",&x1);
	
	for(i=0;i<X;i++){
		if(x1 == v[i]){
		printf("Valor:%d\n",v[i]);	
		p++;
		}
	}
	if(p==0)
		printf("Valor inexistente\n");
	system("PAUSE");
}

