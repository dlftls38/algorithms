#include <stdio.h>
int count,n,count2;
void gogo(int a,int b){
	if(b==n){
		count++;
		return;
	}
	if(a+1<10) gogo(a+1,b+1);
	if(a-1>-1) gogo(a-1,b+1);
}
int main(){
	int i;
	scanf("%d",&n);
	for(i=1;i<10;i++){
		count=0;
		gogo(i,1);
		printf("%d\n",count%1000000000);
		count2+=count;
	}
	printf("%d",count2%1000000000);
}
