# include <stdio.h> //Questão 03

int main(){
	float a,b,c,d;
	char s[50];
	printf("Nome?\n");
	scanf("%s",&s);
	printf("Nota01?\n");
	scanf("%f",&a);
	printf("Nota01?\n");
	scanf("%f",&b);
	printf("Nota01?\n");
	scanf("%f",&c);
	d=(a*4+b*5+c*6)/15;
	printf("%s,sua media foi:%.2f\n",s,d);
}
