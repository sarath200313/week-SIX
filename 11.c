#include<stdio.h>
int p,q,r;
rev(int p){
	if(p){
		r=p%10;
		r=r+q;
		rev(p/10);
	}
	return r;
}
int main(){
	int x;
	scanf("%d",&x);
	printf("%d",rev(x));
	return 0;
}
