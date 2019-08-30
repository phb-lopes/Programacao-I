#include <stdio.h>
#include <stdlib.h>
#define x 4

int store(int v[x]){
	int i;
	for(i=0;i<x;i++){
		printf("Valor %d\n",i+1);
		scanf("%d",&v[i]);
	}
	return(v[x]);
}
void show(int v[x]){
	int i;
	for(i=0;i<x;i++){
		printf("Valor %d\n",v[i]);
	}
}
int main(){
	int v[x];
	store(v);
	system("cls");
	show(v);
	system("PAUSE");
	
}

