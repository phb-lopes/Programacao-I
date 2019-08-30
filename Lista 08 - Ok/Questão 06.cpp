#include <stdio.h>
#include <stdlib.h>
#define A 40
struct dadosAluno{
	int id,nm;
	char nr[40];
	float v,at;
}x[A];

int main(){
	int i,nt=0,nmt,mai,mei;
	float att=0,ma,me;
	for(i=0;i<A;i++){
		printf("Nome do responsavel %d\n",i+1);
		scanf("%s",&x[i].nr);
		printf("Numero do apo?\n");
		scanf("%d",&x[i].id);
		printf("Numero de moradores do apo?\n");
		scanf("%d",&x[i].nm);
		printf("Area em m2 do apo %d?\n",i+1);
		scanf("%f",&x[i].at);
		printf("Valor de despesas do apo %d?\n",i+1);
		scanf("%f",&x[i].v);
		system("cls");
	}
	
	ma=x[0].at;
	me=x[0].at;
	nmt=x[0].nm;
	
	for(i=0;i<A;i++){
		if(x[i].at>ma)
			mai=i;
		if(x[i].at<me)
			mei=i;
		if(x[i].nm>nmt)
			nmt=i;			// Apo com mais pessoas.
		
		nt=nt+x[i].nm;		// Numero total de condominos.
		att=att+x[i].at;	//Area total do condominio.
	}
	int op;
	
	while(op!= 7){
		printf("Digite:\n1 - Calcular a area total do condominio\n");
		printf("2 - Calcular o preco do condominio a ser pago por cada apartamento\n");
		printf("3 - Mostrar os dados do maior apartamento\n");
		printf("4 - Mostrar os dados do menor apartamento\n");
		printf("5 - Calcular a populacao do condominio\n");
		printf("6 - Imprimir informacoes do apartamento que tem o maior numero de moradores\n");
		printf("7 - Sair do programa\n");
		scanf("%d",&op);
		if(op==1){
			printf("\nArea de cada apartamento:\n");
			for(i=0;i<A;i++){
				printf("Area do Apo %d: %.2f\n",i+1,x[i].at);
			}
			printf("\nArea total do condomio: %.2f\n\n",att);
		}
		if(op==2){
			float pt=0;
			printf("\nPreco a ser pago por cada apartamento:\n");
			for(i=0;i<A;i++){
				printf("Apo %d: %.2f\n",i+1,x[i].v);
				pt=pt+x[i].v;
			}
			printf("Preco total a ser pago:%.2f",pt);
			printf("\n");
		}
		if(op==3){
			printf("Dados do maior apo:\n");
			printf("Nome do responsavel: %s\n",x[mai].nr);
			printf("Numero do apo:%d\n",x[mai].id);
			printf("Numero de moradores do apo:%d\n",x[mai].nm);
			printf("Area em m2 do apo: %.2f\n",x[mai].at);
			printf("Valor de despesas do apo: %f\n",x[mai].v);
		}
		if(op==4){
			printf("Dados do menor apo:\n");
			printf("Nome do responsavel: %s\n",x[mei].nr);
			printf("Numero do apo:%d\n",x[mei].id);
			printf("Numero de moradores do apo:%d\n",x[mei].nm);
			printf("Area em m2 do apo: %.2f\n",x[mei].at);
			printf("Valor de despesas do apo: %d\n",x[mei].v);
		}
		if(op==5){
			printf("Populacao:\n");
			for(i=0;i<A;i++){
				printf("Populacao do apo %d: %d\n",i+1,x[i].nm);
			}
			
			printf("Populacao total do condominio:%d\n",nt);
		}
		if(op==6){
			printf("Dados do menor apo:\n");
			printf("Nome do responsavel: %s\n",x[nmt].nr);
			printf("Numero do apo:%d\n",x[nmt].id);
			printf("Numero de moradores do apo:%d\n",x[nmt].nm);
			printf("Area em m2 do apo: %.2f\n",x[nmt].at);
			printf("Valor de despesas do apo: %f\n",x[nmt].v);
		}
		if(op==0){
			system("cls");
		}
	}
	system("cls");
	printf("Obrigado\n");
	system("PAUSE");
} 
