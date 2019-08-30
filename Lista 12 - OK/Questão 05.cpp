#include <stdio.h>
#include <stdlib.h>
 
 struct hab{
 	float sala;
 	int f;
 }x[100];

int store(){
	int op,i=0;
	do{
		do{
			printf("Digite:\n1 - Preencher\n0 - Para sair\n");
			scanf("%d",&op);	
		}while(op!=1 && op!=0);
		if(op==1){
				printf("Total de filhos?\n");
				scanf("%d",&x[i].f);
				printf("Total de salario?\n");
				scanf("%f",&x[i].sala);
				i++;
		}else{
		break;
		}
	}while(op!=0);
	return(i);
}

float mediasal(int k){
	float m=0;
	int i,cont=0;
	for(i=0;i<k;i++){
		m = m + x[i].sala;
		cont++;
	}
	if(cont==1){
	return(m);	
	}else{
	m=m/cont;
	return(m);	
	}
	
}

float mediaf(int k){
	float m=0;
	int i,cont=0;
	for(i=0;i<k;i++){
		m = m + x[i].f;
		cont++;
	}
	if(cont > 1){
	m=m/cont;
	return(m);	
	}
	else{
	return(m);	
	}
}

float maiorq(int k){
	float m=0,j;
	int i,cont=0;
	int y=0;
	for(i=0;i<k;i++){
		if(x[i].sala>=350){
		cont++;		
		}
		y++;
	}
	j = (float)(cont*100)/k;
	return(j);
}

float maior(int k){
	float maiorsala=x[0].sala;
	int i;
	for(i=0;i<k;i++){
		if(maiorsala<x[i].sala){
			maiorsala = x[i].sala;
		}
	}
	return(maiorsala);
}

int main(){
	int k;
	float m,mf,mmaior,maisq;
	k=store();
	m=mediasal(k);
	mf=mediaf(k);
	mmaior=maior(k);
	maisq = maiorq(k);
	system("cls");
	printf("Media Geral de Salarios:%.2f\n",m);
	printf("Media Geral de Filhos:%.2f\n",mf);
	printf("Maior salario:%.2f\n",mmaior);
	printf("Porcetagem com Salario acima de 350 reais :%.2f\n",maisq);
     system("PAUSE");
}
