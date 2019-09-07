#include <stdio.h>
#include <algorithm>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int i;
	int a[20000]={0};
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	if(n%2==0){
		printf("%d",a[n/2-1]);
	}
	else{
		printf("%d",a[n/2]);
	}
}
//2 2 3 4 9 10
