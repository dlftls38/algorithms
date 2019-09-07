#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int first=n;
	int count=0;
	while(1){
		count++;
		n=(n%10)*10+(n/10+n%10)%10;
		if(first==n){
			break;
		}
	}
	printf("%d",count);
}
