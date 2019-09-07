#include <stdio.h>
int n,k;
long long count;
void search(int now,long long now_count){
	int i;
	if(now==n && now_count==k){
		count++;
		return;
	}
	for(i=0;i<n+1;i++){
		if(now+i<=n && now_count+1<=k){
			search(now+i,now_count+1);
		}
		else{
			break;
		}
	}
}
int main(){
	while(1){
		scanf("%d%d",&n,&k);
		count=0;
		search(0,0);
		printf("%lld\n",count);
	}
}
