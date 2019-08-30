#include <stdio.h>
#include <stdlib.h>
#define TAM 5
int main(){
	
	int v1[TAM],v2[TAM],i;
	char s[TAM];
	float v3[TAM];
	
	for(i=0;i<TAM;i++){
		printf("Valor do vetor 01?\n");
		scanf("%d",&v1[i]);
		while(v1[i]<= 0 ){
			printf("Valor Invalido\n Digite novamente\n");
			scanf("%d",&v1[i]);
		}
	}
	for(i=0;i<TAM;i++){
		printf("Operador logico?\n");
		scanf("%s",&s[i]);
	}
	
	for(i=0;i<TAM;i++){
		printf("Valor do vetor 02?\n");
		scanf("%d",&v2[i]);
		while(v1[i]<= 0 ){
			printf("Valor Invalido\n Digite novamente\n");
			scanf("%d",&v1[i]);
		}
	}
	
	system("cls");
	
	for(i=0;i<TAM;i++){
		if(s[i] == '+'){
			v3[i]=v1[i]+v2[i];
		}
		if(s[i]=='-'){
			v3[i]=v1[i]-v2[i];	
		}
		
		if(s[i]=='/'){
			v3[i]=v1[i]/v2[i];	
		}
		
		if(s[i]=='*'){
			v3[i]=v1[i]*v2[i];
		}
			
	}
	printf("Resultados:\n\n");
	for(i=0;i<TAM;i++){
		printf("%d %c %d = %.2f\n",v1[i],s[i],v2[i],v3[i]);
	}
	
	system("PAUSE");
}
