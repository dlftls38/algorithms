#include <stdio.h>
int main(){
	int n,a,b;
	scanf("%d%d%d",&n,&a,&b);
	int c[20]={0};
	int k[2]={0};
	k[0]=a;
	k[1]=b;
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&c[i]);
	}
	int small,big;
	if(a>b){
		small=b;
		big=a;
	}
	else{
		small=a;
		big=b;
	}
	int answer=0;
	if(n%2==1 && c[n/2]==2){
		answer+=small;
	}
	for(i=0;i<n/2;i++){
		if(c[i]==1 && c[n-1-i]==1){
		}
		else if(c[i]==0 && c[n-1-i]==0){
		}
		else if(c[i]==2 && c[n-1-i]==2){
			answer+=small;
			answer+=small;
		}
		else if(c[i]==2){
			answer+=k[c[n-1-i]];
		}
		else if(c[n-1-i]==2){
			answer+=k[c[i]];
		}
		else{
			answer=-1;
			break;
		}
	}
	printf("%d",answer);
}
