#include <stdio.h>

int N(int x){
	return 0;
}
int g(int x){
	return N(x);
}
int h(int x, int y1, int y2){

	return y2+1;
}

int f(int x, int y){

	if(y==0)
		return g(x);
	else
		return h(x,y,f(x,y-1));
}

int main(){

	int x=3,y=5;

    printf("%d\n",f(x,y));

    return 0;
}