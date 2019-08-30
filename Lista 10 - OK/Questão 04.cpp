#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int Triangulo ( float lado1, float lado2, float lado3 ){
	if(lado1> lado2+lado3 || lado2>lado1+lado3 || lado3>lado1+lado2)
		return (0);
	else if((lado1 == lado2 && lado1!=lado3) || (lado2 == lado3 && lado2 != lado1) || (lado1 == lado3 && lado1!=lado2))
		return (2);		// Isoceles
	else if(lado1 != lado2 && lado2 != lado3 && lado1 != lado3)
		return (1);		// Escaleno
	else if(lado1 == lado2 && lado2 == lado3)
		return (3);		// Equilatero
	
}

int main(){
	float x1,x2,x3;
	int r;
	
	printf("Valor de x1?\n");
	scanf("%f",&x1);	
	printf("Valor de x2?\n");
	scanf("%f",&x2);
	printf("Valor de x3?\n");
	scanf("%f",&x3);
	
	r=Triangulo(x1,x2,x3);
	
	if(r == 0)
	printf("Nao existe triangulo. Valores invalidos!\n");
	if(r == 1)
	printf("Triangulo Escaleno\nValores:\nx1:%.2f\t\tx2:%.2f\t\tx3:%.2f\n",x1,x2,x3);
	if(r == 2)
	printf("Triangulo Isosceles\nValores:\nx1:%.2f\t\tx2:%.2f\t\tx3:%.2f\n",x1,x2,x3);
	if(r == 3)
	printf("Triangulo Equilatero\nValores:\nx1:%.2f\t\tx2:%.2f\t\tx3:%.2f\n",x1,x2,x3);	
	system("PAUSE");
}
