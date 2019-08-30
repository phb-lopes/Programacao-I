#include <stdio.h>
#include <stdlib.h>

int main(){
	int x,j=0;
	for(int i=0;i<50;i++){
		printf("Valor?\n");
		scanf("%d",&x);
		if(x>100){
		j++;
		}
	}
	printf("Total de numeors maiores que 50: %d\n",j);
	system("PAUSE");
}

