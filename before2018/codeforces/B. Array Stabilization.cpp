#include <stdio.h>
#include <algorithm>
using namespace std;
int a[100001]={0};
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	if(a[n-2]==a[n-1]){
		printf("%d",a[n-1]-a[1]);
	}
	else if(a[0]==a[1]){
		printf("%d",a[n-2]-a[0]);
	}
	else{
		if(a[n-1]-a[n-2]>a[1]-a[0]){
			printf("%d",a[n-2]-a[0]);
		}
		else{
			printf("%d",a[n-1]-a[1]);
		}
	}
}
