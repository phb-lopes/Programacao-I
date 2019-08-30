#include <stdio.h>
#include <stdlib.h>
#define X 2

int main(){
	int a[X][X],b[X][X];
	int i,j,c,e,d=1;	
	for(int i=0;i<X;i++){
		for(int j=0;j<X;j++){
			printf("Valor:%d da Matriz 01\n",i+j+d);
			scanf("%d",&a[i][j]);
		}
		d++;
	}
	printf("\n");
	d=1;
	for(int i=0;i<X;i++){
		for(int j=0;j<X;j++){
			printf("Valor:%d da Matriz 02\n",i+j+d);
			scanf("%d",&b[i][j]);
		}
		d++;
	}

	for(i=0;i<X;i++){
		for(j=0;j<X;j++){
			for(c=0;c<X;c++){
				for(e=0;e<X;e++){
					if(a[i][j] == b[c][e]){
					printf("O numero %d esta em ambos as matrizes\n",a[i][j]);
					}
				}	
			}
		}
	}	
	system("PAUSE");
}
