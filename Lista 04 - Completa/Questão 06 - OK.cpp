#include <stdio.h>
#include <stdlib.h>

int main(){
	int x;
	
	printf("Valor?\n");
	scanf("%d",&x);
	
	for(int i=1;i<=x;i++){
		if( x % i == 0){
		printf("Numero: %d\n",i);
		}
	}
	system("PAUSE");
}

