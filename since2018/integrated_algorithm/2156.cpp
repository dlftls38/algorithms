#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	int a[2][10000]={0};
	for(i=0;i<n;i++){
		scanf("%d",&a[0][i]);
	}
	a[1][0]=a[0][0];
	for(i=1;i<n;i++){
		a[1][i]=a[0][i]+a[0][i-1];
		if(i>2){
			a[0][i]+=max(max(a[1][i-2],a[0][i-2]),max(a[1][i-3],a[0][i-3]));
		}
		else if(i>1){
			a[0][i]+=max(a[1][i-2],a[0][i-2]);
		}
	}
	int answer=0;
	for(i=0;i<2;i++){
		for(j=0;j<n;j++){
			if(answer<a[i][j]){
				answer=a[i][j];
			}
		}
	}
	printf("%d",answer);
}
