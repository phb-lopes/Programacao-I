#include <stdio.h>
#include <stdlib.h>
#define A 2
struct dadosAluno{
	int m,rg;
	char n[40];
	float sala;
}x[A];

int main(){
	int i;
	int v1[12];
	for(i=0;i<A;i++){
		printf("Nome do funcionario %d?\n",i+1);
		scanf("%s",&x[i].n);
		printf("RG do funcionario %d?\n",i+1);
		scanf("%d",&x[i].rg);
		printf("Digite o numero correspondente ao mes do funcionario %d?\n",i+1);
		scanf("%d",&x[i].m);
		while((x[i].m > 13) || (x[i].m<0)){
			printf("Mes invalido! Tente novamente\n");
			printf("Digite o numero correspondente ao mes do funcionario %d?\n",i+1);
			scanf("%d",&x[i].m);
		}
		printf("Salario do funcionario %d?\n",i+1);
		scanf("%f",&x[i].sala);
		
		system("cls");
	}

	for(i=0;i<A;i++){
		for(int j=0;j<13;j++){
			if(x[i].m == j){
			printf("Aniversariantes do mes %d:\n",j);
			printf("Nome do funcionario %s\nRG do funcionario %d\nSalario do funcionario:%2.f\n",x[i].n,x[i].rg,x[i].sala);	
			printf("\n");
			}
			
		}
		
	}
	
	system("PAUSE");
} 
