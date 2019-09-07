#include <stdio.h>
int gcd(int a,int b){return b?gcd(b,a%b):a;}
int main(){
	int t,n,i,j,a[110]={0};
	long long sum;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		sum=0;
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		for(j=0;j<n-1;j++){
			for(i=j+1;i<n;i++){
				sum+=gcd(a[j],a[i]);
			}
		}
		printf("%d\n",sum);
	}
}
