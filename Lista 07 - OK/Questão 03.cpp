#include <stdio.h>
#include <stdlib.h>
int main(){
	int i,j,m=0,n=0;
	
	printf("Valor de linhas?\n");
	scanf("%d",&m);
	printf("Valor de Colunas?\n");
	scanf("%d",&n);

	int v1[m][n];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("Numero?\n");
			scanf("%d",&v1[i][j]);
		}
	}
	system("cls");
	printf("Matriz\n");
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d\t",v1[i][j]);
		}
		printf("\n");
	}
	printf("-----------------------------\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
		if(i<j){
			v1[i][j]=(2*i)+((7*j)-2);
		}
		if(i==j){
			v1[i][j] = ((3*i)-1);
		}
		if(i>j){
			v1[i][j] = ((4*i)-5)*(j*2);
			}
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d\t",v1[i][j]);
		}
		printf("\n");
	}
	
	system("PAUSE");
} 
