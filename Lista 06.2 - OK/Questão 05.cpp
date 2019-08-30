#include <stdio.h>
#include <stdlib.h>
#define X 3	// Numero da mega sena da virada
#define n 3	// Numero do cartao de cada apostador
#define p 3 // total de numero que podem ser jogados = 13

int main(){
	int lot[X],i;
	int usu[X][X];
	int j,cont[X];
	
	printf("Digite a matriz sorteada\n");
	for(i=0;i<X;i++){
		printf("Valor?\n");
		scanf("%d",&lot[i]);
		cont[i]=0;
	}
	
	system("cls");
	
	for(i=0;i<X;i++){
		for(j=0;j<X;j++){	
			printf("Jogador %d:Valor da aposta %d?\n",i+1,j+1);
			scanf("%d",&usu[i][j]);
		}
		system("cls");
	}
	
	for(i=0;i<X;i++){
		for(j=0;j<X;j++){	
			if(usu[i][j] == lot[j] ){
				cont[i]++;	
			}
		}
		printf("Jogador %d Acertou %d vezes\n\n",i+1,cont[i]);
	}
	
	for(i=0;i<X;i++){
		if(cont[i]==3){
			printf("Parabens! O jogador %d acertou tudo! Seus numeros foram:\n",i+1);
			for(j=0;j<X;j++){
			printf("%d\n",usu[i][j]);	
			}
			printf("\n");
		}
	}
	
	
	printf("Matriz sorteada:\n");	
	for(i=0;i<X;i++){
		printf("%d\n",lot[i]);
		}
	system("PAUSE");
} 
