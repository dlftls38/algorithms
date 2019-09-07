#include <stdio.h>
#include <algorithm>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	long long a[1000]={0};
	for(int i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	sort(a,a+n);
	printf("%lld",a[n-1]-a[0]+1-n);
}
