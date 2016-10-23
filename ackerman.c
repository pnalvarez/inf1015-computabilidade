#include <stdio.h>

int Ackerman(int m, int n){

	if(m==0)
		return n+1;
	else if(n==0){
		 printf("A(%d,%d)\n",n,m);
		return Ackerman(m-1,0);
	}
	else{
		printf("A(%d,%d)\n",n,m);
		return Ackerman(m-1,Ackerman(m,n-1));
	}
}

int main(){

	int m,n;

	printf("Entre com dois valores inteiros positivos\n");
	scanf("%d%d",&m,&n);

	printf("%d\n",Ackerman(m,n));

	return 0;
}