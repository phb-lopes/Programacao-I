#include <stdio.h>
#include <stdlib.h>

int main(){
    float i,n,k=0, teste;
 
    do{
       printf("Digite um valor acima de 10!\n");
       scanf("%f", &n);
       if(n<10){
    		printf("Valor incorreto\n");
			printf("Digite um valor acima de 10!\n");
       		scanf("%f", &n);
	   }
    }while(n<=10);
    for(i=2;i<=n;i++){
	k=k+(float)(1/i);
	}
    printf("Valor e: %.1f\n",k);
    system("PAUSE");
}
