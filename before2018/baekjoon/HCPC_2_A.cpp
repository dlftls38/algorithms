#include <stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int now=1;
		int count=0;
		if(now%n!=0){
			count++;
			now++;
		}
		while(now%n!=0){
			count++;
			now+=2;
		}
		printf("%d\n",count);
	}
}
