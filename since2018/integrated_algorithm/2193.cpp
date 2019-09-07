#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	long long a[2]={0};
	a[1]=1;
	int i,j;
	for(i=1;i<n;i++){
		long long b[2]={0};
		b[0]+=a[0]+a[1];
		b[1]+=a[0];
		a[0]=b[0];
		a[1]=b[1];
	}
	printf("%lld",a[0]+a[1]);
}
