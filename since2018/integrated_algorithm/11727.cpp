#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int a[1000]={0};
	a[0]=1;
	a[1]=3;
	int i;
	for(i=2;i<1000;i++){
		a[i]=(a[i-1]+a[i-2]*2)%10007;
	}
	printf("%d",a[n-1]);
}
