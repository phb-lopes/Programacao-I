#include <stdio.h>
#include <stdlib.h>
#define A 5
struct dadosAluno{
	char t[20];
	int ad;
	int n;
	float p;
}x[A];

int main(){
	int i;
	
	for(i=0;i<A;i++){
		printf("Titulo do livro %d?\n",i+1);
		scanf("%s",&x[i].t);
		printf("Ano de lancamento do livro %d?\n",i+1);
		scanf("%d",&x[i].ad);
		printf("Numero de paginas do livro %d?\n",i+1);
		scanf("%d",&x[i].n);
		printf("Preco do livro %d?\n",i+1);
		scanf("%f",&x[i].p);
		system("cls");
	}
	int ma=x[0].p,me=x[0].p,mai,mei;
	float mn=0;
	for(i=0;i<A;i++){
		if(ma>x[i].p){
			ma=x[i].p;
			mai=i;
		}
		if(me<x[i].p){
			me=x[i].p;
			mei=i;
		}
		mn=mn+x[i].n;
		
	}
	mn=mn/A;
	printf("Livro mais caro:\n");
	printf("Livro:%c\nAno de lancamento:%d\nNumero de paginas: %d\nPreco:%.2f\n",x[mai].t,x[mai].ad,x[mai].n,x[mai].p);
	printf("Livro mais barato:\n");
	printf("Livro:%c\nAno de lancamento:%d\nNumero de paginas: %d\nPreco:%.2f\n",x[mei].t,x[mei].ad,x[mei].n,x[mei].p);
	printf("Media de paginas dos livros:%.2f\n",mn);	
	
	system("PAUSE");
} 
