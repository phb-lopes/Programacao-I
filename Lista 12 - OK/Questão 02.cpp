#include <stdio.h>
#include <stdlib.h>
#define d 10
int tab(int x){
	if(x>5 && x<8)
		return(5);
	if(x>8 && x<11)
		return(8);
	if(x>11 && x<14)
		return(11);
	if(x>14 && x<18)
		return(14);
	if(x>18)
		return(18);
	
	
}	


int main(){
	int x,v;
	do{
		printf("Idade?\n");
		scanf("%d",&x);	
	}while(x<0);
	v=tab(x);
	if(v==5)
		printf("Categoria:Infantil A\n");
	if(v==8)
		printf("Categoria:Infantil B\n");
	if(v==11)
		printf("Categoria:Juvenil A\n");
	if(v==14)
		printf("Categoria:Juvenil B\n");
	if(v==18)
		printf("Categoria:Adulto\n");
	
	system("PAUSE");	
}

