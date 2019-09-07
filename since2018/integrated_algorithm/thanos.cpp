#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
void thanos(int *a, int *sum, int left, int right){
	int i;
	int check=0;
	for(i=left;i<right-1;i++){
		if(a[i]>a[i+1])
			check=1;
	}
	if(check==1){
		thanos(a,sum,left,(left+right)/2);
		thanos(a,sum,(left+right)/2,right);
	}
	else{
		if(right-left>*sum)
			*sum = right-left;
	}
}
int main(){
	int i,n;
	scanf("%d",&n);
	int a[100]={0};
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int sum=0;
	thanos(a,&sum,0,n);
	printf("%d",sum);
}