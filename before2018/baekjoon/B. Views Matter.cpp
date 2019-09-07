#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int a[100001];
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int i;
	long long sum=0;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	sort(a,a+n);
	sum-=n;
	int h=1;
	for(i=1;i<n;i++){
		if(a[i]>h){
			h++;
		}
	}
	sum-=a[n-1]-h;
	if(n==1){
		printf("0");
	}
	else{
		printf("%lld",sum);	
	}
}
