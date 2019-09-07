#include <stdio.h>
long long a[200001];
long long check[200001];
int main(){
	long long n,m;
	scanf("%lld%lld",&n,&m);
	int i;
	long long min=1000000000000000;
	int position;
	for(i=0;i<n;i++){
		scanf("%lld",&a[i]);
		if(a[i]<min){
			min=a[i];
			position=i;
		}
	}
	for(i=0;i<n;i++){
		if(position!=i){
			check[i]=min+a[i];
		}
	}
	for(i=0;i<m;i++){
		long long x,y,w;
		scanf("%lld%lld%lld",&x,&y,&w);
		x--;
		y--;
		if((w<check[x] || w<check[y])){
			if(check[x]>check[y]){
				check[x]=w;
			}
			else{
				check[y]=w;
			}
		}
	}
	long long answer=0;
	for(i=0;i<n;i++){
		answer+=check[i];
	}
	printf("%lld",answer);
}
