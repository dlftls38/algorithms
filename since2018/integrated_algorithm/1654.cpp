#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;
long long a[10000];
int k,n;
long long answer;
void binary_search(long long left, long long right){
	while(left<=right) {
		long long mid = (left + right)/ 2;
		long long count=0;
		for(int i=0;i<k;i++){
			count+=a[i]/mid;
		}
		if(count>=n){
			left = mid + 1;
			answer=max(answer,mid);
		}
		else{
			right = mid - 1;
		}
	}
}

int main(){
	scanf("%d%d",&k,&n);
	int i;
	for(i=0;i<k;i++){
		scanf("%lld",&a[i]);
	}
	sort(a,a+k);
	reverse(a,a+k);
	binary_search(1,a[0]);
	printf("%lld",answer);
}
