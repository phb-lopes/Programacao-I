#include <stdio.h>

int main(){

float a, b, c, fa, fb, d, x1, x2, fx1, fx2;

printf ("Digite valor A e um valor b para a<b:\n");
scanf ("%f", &a);
printf ("Digite um segundo valor:\n");
scanf ("%f", &b);
fa=(3*a+1)/2;
fb=(3*b+1)/2;
d=(b-a)/3;
x1=a+d;
x2=b-d;
fx1=(3*x1+1)/2;
fx2=(3*x2+1)/2;


printf("O resultado de fa e fb sao respectivamente, %.2f %.2f \n", fa, fb);
printf("Os intervalos sao respectivamente, %.2f, %.2f\n", x1, x2);
printf("os f das funcoes dos intervalos x1 e x2 sao respectivamente, %.2f %.2f\n", fx1, fx2);

          getch();

}
