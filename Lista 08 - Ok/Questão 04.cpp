#include <stdio.h>
#include <stdlib.h>
#define A 500
struct dadosAluno{
	int id,nf;
	char s[1];
	float sala;
}x[A];

int main(){
	int i;
	float ms=0,mi=0;
	for(i=0;i<A;i++){
		printf("Idade do habitante %d?\n",i+1);
		scanf("%d",&x[i].id);
		printf("Numero de filhos do habitante %d?\n",i+1);
		scanf("%d",&x[i].nf);
		printf("Digite:\nM Para Masculino | F para feminino %d\n",i+1);
		scanf("%s",&x[i].s);
		printf("Salario do habitante %d?\n",i+1);
		scanf("%f",&x[i].sala);
		system("cls");
	}
	
	printf("DADOS:\n");
	for(i=0;i<A;i++){
	printf("Idade do habitante %d:%d\nNumero de filhos do habitante %d:%d\nSexo do habitante %d:%s\n",i+1,x[i].id,i+1,x[i].nf,i+1,x[i].s);
	printf("Salario do habitante %d:%.2f\n\n",i+1,x[i].sala);
	ms=ms+x[i].sala;
	mi=mi+x[i].nf;
	}
	ms=ms/A;
	mi=mi/A;
	printf("Media de filhos:%.2f\nMedia de Salarios:%.2f\n",mi,ms);
	system("PAUSE");
} 
