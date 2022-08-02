#include<stdio.h>
int m;
void digits(int n){
	if (n){
		digits(n/10);
		m=n%10;
		printf("%d\n",m);
		}
		}
		int main(){
			int x;
			scanf("%d",&x);
			digits(x);
			return 0;
			}
