#include <stdio.h>
#include <stdlib.h> 

int somadiagonal(int tipo,int ordem_da_matriz){
	
	int matriz[ordem_da_matriz][ordem_da_matriz];
	
	int i,j,somad=0;
	
	if(tipo == 1){
		for(i=0;i<ordem_da_matriz;i++){
			for(j=0;j<ordem_da_matriz;j++){
				printf("Valor [%d][%d] ",i+1,j+1);
				scanf("%d",&matriz[i][j]);
				if(j>i){
					somad=somad+matriz[i][j];
				}	
			}
		}
		system("cls");
		printf("Matriz:\n");
		for(i=0;i<ordem_da_matriz;i++){
			for(j=0;j<ordem_da_matriz;j++){
				printf("%d\t",matriz[i][j]);
			}
			printf("\n");
		}
		return(somad);
	}else{
		for(i=0;i<ordem_da_matriz;i++){
			for(j=0;j<ordem_da_matriz;j++){
				printf("Valor [%d][%d] ",i+1,j+1);
				scanf("%d",&matriz[i][j]);
				if(i>j){
					somad=somad+matriz[i][j];
				}	
			}
		}
		system("cls");
		printf("Matriz:\n");
		for(i=0;i<ordem_da_matriz;i++){
			for(j=0;j<ordem_da_matriz;j++){
				printf("%d\t",matriz[i][j]);
			}
			printf("\n");
		}
		return(somad);
	}		
}

int main(){
	int k,t,soma;
	
	printf("Ordem da Matriz Quadrada?\n");
	scanf("%d",&k);
	printf("Tipo da Soma?\n");
	scanf("%d",&t);
	soma=somadiagonal(t,k);
	printf("Soma total:%d\n",soma);
	
	system("PAUSE");
}
