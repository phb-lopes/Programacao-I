#include <stdio.h>
#include <stdlib.h>
#define X 8

int main(){
	int a[X][X];
	int d=1,j;
	
	for(int i=0;i<X;i++){
		for(j=0;j<X;j++){
			printf("Valor?\n");
			scanf("%d",&a[i][j]);
			if(j>i){
				a[i][j]=0;
			}
		}
	}
	
	printf("Matriz final:\n");
	for(int i=0;i<X;i++){
		for(int j=0;j<X;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	system("PAUSE");
}
