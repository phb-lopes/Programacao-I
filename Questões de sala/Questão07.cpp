#include <stdio.h>
#include <stdlib.h>

int main(){
	int a,b,c;
	int menor,maior,meiuca,aux;
	printf("Numero 01\n");
	scanf("%d",&a);
	printf("Numero 02\n");
	scanf("%d",&b);
	printf("Numero 03\n");
	scanf("%d",&c);
	if( a > b){
		maior = a;
		menor = b;
	}else{
		maior = b;
		menor = a;
	}
	if(maior < c){
		meiuca = maior;
		maior = c;
	}else{
		aux = meiuca;
		meiuca = menor;
		menor = aux;
	}
	
	printf("Maior:%d\nMeiuca:%d\nMenor:%d\n",maior,meiuca,menor);
	
	system("PAUSE");
}
