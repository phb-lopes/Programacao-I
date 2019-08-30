#include <stdio.h>
#include <stdlib.h>
#define A 5
struct dadosAluno{
	int id;
	char nome[40];
	float x1,x2,x3,ma=0;
}x[A];

int main(){
	int i,ma1,ma1i;
	int menor_mediai,menor_media,maior_mediai,maior_media;
	for(i=0;i<A;i++){
		printf("Nome do Aluno %d\n",i+1);
		scanf("%s",&x[i].nome);
		printf("Numero da Matricula?\n");
		scanf("%d",&x[i].id);
		printf("Nota Numero %d?\n",i+1);
		scanf("%f",&x[i].x1);
		printf("Nota Numero %d?\n",i+1);
		scanf("%f",&x[i].x2);
		printf("Nota Numero %d?\n",i+1);
		scanf("%f",&x[i].x3);
		x[i].ma=(x[i].x1 + x[i].x2 + x[i].x3)/3;
		system("cls");
	}
	
	ma1=x[0].x1;						// Maior media da Primeira nota
	maior_media=x[0].ma;				// Maior media Geral
	menor_media=x[0].ma;				// Menor Media Geral
	
	printf("\n");
	for(i=0;i<A;i++){
		if(x[i].ma >= 7){
			printf("Aluno %s Aproado com %.2f!\n",x[i].nome,x[i].ma);
		}else{
			printf("Aluno %s Reprovado com %.2f!\n",x[i].nome,x[i].ma);
		}
		
		if(x[i].x1>ma1)
			ma1i=i;
		if(x[i].ma > maior_media)
			maior_mediai=i;
		if(x[i].ma<menor_media)
			menor_mediai=i;
	}
		printf("\nDados Gerais:\n");
		printf("Maior Media do Aluno %s com Media %.2f\n",x[maior_mediai].nome,x[maior_mediai].ma);
		printf("Maior Nota da Primeira Prova do Aluno %s com Media %.2f\n",x[ma1i].nome,x[ma1i].x1);
		printf("Menor Media do Aluno %s com Media %.2f\n",x[menor_mediai].nome,x[menor_mediai].ma);
		
	
	system("PAUSE");
} 
