#include <stdio.h>
int fp(int x,int n){
	if(n==0){
		return 1;
	}
	if(n%2==0){
		int q=fp(x,n/2);
		return q*q;
	}
	else{
		return x*fp(x,n-1);
	}
}
int main(){
	printf("%d",fp(3,3));
}
