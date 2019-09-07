#include <stdio.h>
int main(){
	int n;
	long long k;
	scanf("%d%lld",&n,&k);
	int a[200001]={0};
	for(int i=0;i<n;i++){
		int q;
		scanf("%d",&q);
		a[q]++;
	}
	int position;
	for(int i=200000;i>-1;i--){
		if(a[i]!=0){
			position=i;
			break;
		}
	}
	for(int i=position;i>-1;i--){
		if(a[i]==n){
			break;
		}
		a[i-1]+=a[i];
	}
	long long sum=0;
	int answer=0;
	if(a[position]==n){
		printf("0");
		return 0;
	}
	for(int i=position;i>-1;i--){
		if(a[i]==n){
			answer++;
			break;
		}
		if(sum+a[i]<=k){
			sum+=a[i];
		}
		else{
			answer++;
			sum=a[i];
		}
	}
	printf("%d",answer);
}
