#include <stdio.h>
#include <stdlib.h>
#define t 5

int maior(int x,int y){
	if(x>y)
	return(x);
	else
	return(y);
}

int menor(int x,int y){
	if(x>y)
	return(y);
	else
	return(x);
}

int main(){
	int i,x[t],mah,meh;
	
	for(i=0;i<t;i++){
		printf("Valor %d?\n",i+1);
		scanf("%d",&x[i]);	
		
	}
	mah = x[0];
	meh = x[0];
	for(i=0;i<t;i++){
		mah = maior(mah,x[i]);	
		meh = menor(meh,x[i]);
	}
	printf("Maior valor:%d\nMenor valor:%d\n",mah,meh);
	system("PAUSE");
}
