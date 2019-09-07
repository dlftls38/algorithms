#include <stdio.h>
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	int max= m>n ? m : n;
	int min;
	if(max==m){
		min=n;
	}
	else{
		min=m;
	}
	int answer=0;
	answer=max/2*min;
	if(max%2==1){
		answer+=min/2;
	}
	printf("%d",answer);
}
