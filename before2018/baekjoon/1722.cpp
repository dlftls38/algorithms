#include <stdio.h>
#include <algorithm>
int main(){
	int n;
	scanf("%d",&n);
	int q;
	scanf("%d",&q);
	int i,j;
	int a[21]={0};
	long long per[22]={0};
	per[0]=1;
	per[1]=1;
	for(i=2;i<21;i++){
		per[i]=per[i-1]*i;
	}
	if(q==1){
		long long x;
		scanf("%lld",&x);
		x--;
		for(int now=n-1;now>-1;now--){
			for(i=1;i<n+1;i++){
				int count=0;
				for(j=0;j<i;j++){
					if(a[j]==1){
						count++;
					}
				}
				if(a[i-1]==0 && x<per[now]*(i-count)){
					x-=per[now]*(i-1-count);
					printf("%d ",i);
					a[i-1]=1;
					break;
				}
			}
		}
	}
	else{
		int b[21]={0};
		for(i=0;i<n;i++){
			scanf("%d",&b[i]);
		}
		long long ans=1;
		for(i=0;i<n;i++){
			int count=0;
			for(j=0;j<i;j++){
				if(b[i]>b[j]){
					count++;
				}
			}
			ans+=per[n-i-1]*(b[i]-1-count);
		}
		printf("%lld",ans);
	}
}
