#include <stdio.h>
#include <stdlib.h>

int main(){
	float x1,x2,x3;
	x1 = 780000*0.46;
	x2 = 780000*0.32;
	x3 = (x1+x2) - 780000;
	x3 = x3*(-1);
	printf("Total do 1: %.2f\nTotal do 2: %.2f\nTotal do 3: %.2f\n",x1,x2,x3);
	system("PAUSE");
}

