#include <stdio.h> //Questão 04
#include <math.h>
int main(){
	float a,b,c,d,r,s;
	printf("Nota01?\n");
	scanf("%f",&a);
	printf("Nota01?\n");
	scanf("%f",&b);
	printf("Nota01?\n");
	scanf("%f",&c);
	r=(a+b)*(a+b);
	s=(b+c)*(b+c);
	
	d=(r+s)/2;
	
	printf("Expressao:%.2f\n",d);
	
}
