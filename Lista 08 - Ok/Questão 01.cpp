#include <stdio.h>
#include <stdlib.h>

struct dadosAluno{
	float m;
	int i;
}x;

int main(){
	
	printf("Media?\n");
	scanf("%f",&x.m);
	printf("Idade?\n");
	scanf("%d",&x.i);
	
	printf("Media:%.2f\nIdade:%d\n",x.m,x.i);
	
	
	system("PAUSE");
} 
