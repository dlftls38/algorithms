#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	int a[1000]={0};
	int b[1000]={0};
	int c[1000]={0};
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		b[i]=1;
		c[i]=1;
	}
	int answer=1;
	for(i=0;i<n;i++){
		for(j=0;j<i;j++){
			if(a[i]>a[j] && b[i]<=b[j]){
				b[i]=b[j]+1;
			}
		}
	}
	for(i=n-1;i>-1;i--){
		for(j=n-1;j>i;j--){
			if(a[i]>a[j] && c[i]<=c[j]){
				c[i]=c[j]+1;
			}
			if(answer<b[i]+c[i]-1){
				answer=b[i]+c[i]-1;
			}
		}
	}
	printf("%d",answer);
}
