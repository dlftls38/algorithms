#include <stdio.h>
int flag=0;
void recursion(int n,int k,char a[60],int now,int count){
	printf("%s\n",a);
	if(flag==1){
		return;
	}
	if(n>0){
		if(k==0){
			printf("%s",a);
			for(int i=0;i<n;i++){
				printf("A");
			}
			flag=1;
			return;
		}
		a[now++]='A';
		recursion(n-1,k,a,now,count+1);
		a[--now]=0;
		if(k>=count){
			a[now++]='B';
			recursion(n-1,k-count,a,now,count);
		}
	}
	else{
		if(k==0){
			flag=1;
			printf("%s",a);
			return;
		}
	}
}
int main(){
	int n,k;
	scanf("%d %d",&n,&k);
	char a[60]={0};
	if(k==0){
		printf("B");
		for(int i=0;i<n-1;i++){
			printf("A");
		}
	}
	else{
		recursion(n,k,a,0,0);
		if(flag==0){
			printf("-1");
		}
	}
}
