#include <stdio.h>
#include <stdlib.h>
#define X 5

int main(){
	int v,s,n=0,v1=0,v2=0,v3=0,v4=0,v5=0,b=0;

	do{
		printf("Digite:\n");
	printf("1 a 5 - Para candidato desejado\n06 - Para Brancos\nMaior que 06 - Para Nulos\n0 - Para saber os votos\n\n");
	printf("Qual seu voto?\n");
	scanf("%d",&v);
	system("cls");
	if(v==1)
	v1++;
	if(v==2)
	v2++;
	if(v==3)
	v3++;
	if(v==4)
	v4++;
	if(v==5)
	v5++;
	if(v==6)
	b++;
	if(v>6)
	n++;
	}while(v != 0);
	
	do{
	printf("Senha?\n");
	scanf("%d",&s);
	system("cls");
	}while(s != 1234);
	printf("Senha Correta!\n");
	printf("Votos do canditado 01 : %d\n",v1);
	printf("Votos do canditado 02 : %d\n",v2);
	printf("Votos do canditado 03 : %d\n",v3);
	printf("Votos do canditado 04 : %d\n",v4);
	printf("Votos do canditado 05 : %d\n",v5);
	printf("Votos Brancos : %d\n",b);
	printf("Votos Nulos : %d\n\n",n);
		system("PAUSE");
}
