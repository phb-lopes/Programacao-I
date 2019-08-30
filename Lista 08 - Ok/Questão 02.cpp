#include <stdio.h>
#include <stdlib.h>
#define A 10
struct dadosAluno{
	float m;
	int i;
}x[A];

int main(){
	for(int i=0;i<A;i++){
		printf("Media %d?\n",i+1);
		scanf("%f",&x[i].m);
		printf("Idade %d?\n",i+1);
		scanf("%d",&x[i].i);
		system("cls");
	}
	
	for(int i=0;i<A;i++){
	printf("Media:%.2f\nIdade:%d\n",x[i].m,x[i].i);
	}
	
	system("PAUSE");
} 
