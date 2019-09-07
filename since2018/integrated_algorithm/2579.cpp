#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int i;
	int a[400]={0};
	int b[400]={0};
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	b[0]=a[0];
	for(i=1;i<n;i++){
		b[i]=a[i]+a[i-1];
		if(i>1){
			a[i]+=max(b[i-2],a[i-2]);
		}
	}
	printf("%d",max(a[n-1],b[n-1]));
}
