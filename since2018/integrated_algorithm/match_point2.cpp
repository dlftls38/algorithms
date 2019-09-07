#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <set>
using namespace std;
long long a[200000];
long long b[200000];
int main(){
	int n;
	long long z;
	scanf("%d%lld",&n,&z);
	int i;
	for(i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	sort(a,a+n);
	int j=0;
	for(i=0;i<200000;i++){
		if(a[i]>0){
			b[j++]=a[i];
		}
	}
	int count=0;
	int left=0;
	int right=n/2;
	int left_end=right;
	int right_end=n;
	while(1){
		if(a[right]-a[left]>=z){
			count++;
			left++;
		}
		right++;
		if(left==left_end || right==right_end){
			break;
		}
	}
	printf("%d",count);
}
