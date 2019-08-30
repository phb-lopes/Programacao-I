#include <stdio.h>
#include <stdlib.h>

int fib(int n){
	int cont,a=0,b=1,i;
	 for(i=1;i<=n;i++){
      if(i<=1)
         cont=i;
      else{
         cont=a+b;
         a=b;
         b=cont;
      }
      printf("%d\n",cont);
   }
   return(1);
}
 
int main() {
     int x;
     printf("Valor?\n");
     scanf("%d",&x);
     fib(x);
     system("PAUSE");
}
