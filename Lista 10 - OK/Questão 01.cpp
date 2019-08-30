#include <stdio.h>
#include <stdlib.h>


int par(int p){
	int cont=0;
	if( p%2 == 0)
		return(1);
	else
		return(0);
}

int div3(int p){
	if(p%3 == 0)
		return(1);
	else
		return(0);
}
int div5(int p){
	if(p%5 == 0)
		return(1);
	else
		return(0);
}
int divp(int p){
	int cont=0,i;
	
	for(i=1;i<p;i++){
		if( p%i == 0){
			cont+=i;
		}
	}
	
	if(cont == p)
		return(1);
	else
		return(0);
}

int primo(int p){
	int	i,cont=0;
	
	if(p==1 || p ==2){
		return(1);
	}
	
	for(i=2;i<p;i++){
		if(p%i == 0){
			cont++;
		}		
	}
	if(cont > 0 )
		return(0);
	else
		return(1);
}

int main(){
	int x,k,k1,k2,k3,k4;
	printf("Valor?\n");
	scanf("%d",&x);
	
	k=par(x);
	k1=div3(x);
	k2=div5(x);
	k3=divp(x);
	k4=primo(x);
	
	if(k == 1)
		printf("Numero Par:[Sim]\n");	
	else
		printf("Numro Par:[Nao]\n");	
	if(k1 == 1)
		printf("Divisivel por 3: [Sim]\n");	
	else
		printf("Divisivel por 3: [Nao]\n");	
	if(k2 == 1)
		printf("Divisivel por 5: [Sim]\n");
	else
		printf("Divisivel por 5: [Nao]\n");
	if(k3 == 1)
		printf("Numero perfeito: [Sim]\n");
	else
		printf("Numero perfeito: [Nao]\n");
	if(k4 == 1)
		printf("Numero primo: [Sim]\n");
	else
		printf("Nuemro primo: [Nao]\n");
	
	system("PAUSE");
}

