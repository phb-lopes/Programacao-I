 #include <stdio.h>
#include <stdlib.h>
#define d 10
int tab(int x){
	int i,v[d];
	for(i=1;i<d+1;i++){
		//v[i]=i*x;
		printf("%d * %d = %d\n",x,i,i*x);
	}
	return(1);
}


int main(){
	int x,i,v2[d];
	printf("Valor?\n");
	scanf("%d",&x);
	tab(x);
	system("PAUSE");	
}

