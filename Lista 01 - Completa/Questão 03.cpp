	#include <stdio.h>	// Questão 01
#include <stdlib.h>

int main(){
	float x1,x2,x3,m;
	char s[20];
	printf("Nome do aluno?\n");
	scanf("%s",s);
	printf("Nota 01?\n");
	scanf("%f",&x1);
	printf("Nota 02?\n");
	scanf("%f",&x2);
	printf("Nota 03?\n");
	scanf("%f",&x3);
	
	m=((x1*4)+(x2*5)+(x3*6))/15;
	printf("%s, sua media e:%.2f\n",s,m);
	system("PAUSE");
}
