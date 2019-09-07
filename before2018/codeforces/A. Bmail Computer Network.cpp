#include <stdio.h>
#include <algorithm>
using namespace std;
int a[200001];
int b[200001];
int main(){
	int n;
	scanf("%d",&n);
	for(int i=2;i<n+1;i++){
		int x;
		scanf("%d",&x);
		a[i]=x;
	}
	int i=0;
	int k=n;
	b[i++]=n;
	while(1){
		if(k==1){
			break;
		}
		b[i++]=a[k];
		k=a[k];
	}
	int end=i;
	for(i=end-1;i>-1;i--){
		printf("%d ",b[i]);
		
	}
}
