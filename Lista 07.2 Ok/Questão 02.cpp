#include <stdio.h>
#include <stdlib.h>
#define X 4

int main(){
	char gab[X];
	int i,j;
	char res[2][X];
	int cont[X];
	
	for(i=0;i<X;i++){
		printf("Resposta %d?\n",i+1);
		scanf("%s",&gab[i]);
		cont[i]=0;
	}
	system("cls");
	
	for(i=0;i<2;i++){
		for(j=0;j<X;j++){
			printf("Resposta %d do Aluno %d\n",j+1,i+1);
			scanf("%s",&res[i][j]);
		}
	}
	system("cls");
	for(i=0;i<2;i++){
		for(j=0;j<X;j++){	
			if(res[i][j] == gab[j] ){
				cont[i]++;	
			}
		}
		printf("Aluno %d Acertou %d vezes\n",i+1,cont[i]);
	}
	printf("\n");
	for(i=0;i<2;i++){
		for(j=0;j<X;j++){
			printf("Resposta %d do Aluno %d:%c\n",j+1,i+1,res[i][j]);
		}
		printf("\n");
	}
	printf("Gabarito!\n");
	for(i=0;i<X;i++){
		printf("Resposta %c\n",gab[i]);
	}
	printf("\n");
	system("PAUSE");

}
