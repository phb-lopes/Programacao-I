	#include <stdio.h>	// Questão 01
#include <stdlib.h>

int main(){
	int x1,x2,x3;
	float m,r,s;
	printf("Nota 01?\n");
	scanf("%d",&x1);
	printf("Nota 02?\n");
	scanf("%d",&x2);
	printf("Nota 03?\n");
	scanf("%d",&x3);
	
	r=(x1+x2)*(x1+x2);
	s=(x2+x3)*(x2+x3);
	
	m=(r+s)/2;
	printf("Media e:%.2f\n",m);
	system("PAUSE");
}
