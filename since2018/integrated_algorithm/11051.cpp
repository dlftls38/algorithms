#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	int i;
	int a[1001]={0};
	for(i=n-k+1;i<=n;i++){
		int num=i;
		int t=2;
		while (num != 1) {
			if (num % t == 0) {
				a[t]++;
				num /= t;
			}
			else {
				t++;
			}
		}
	}
	int b[1001]={0};
	for(i=2;i<=k;i++){
		int num=i;
		int t=2;
		while (num != 1) {
			if (num % t == 0) {
				b[t]++;
				num /= t;
			}
			else {
				t++;
			}
		}
	}
	for(i=2;i<1001;i++){
		a[i]-=b[i];
	}
	long long answer=1;
	for(i=2;i<1001;i++){
		if(a[i]>0){
			answer*=i;
			a[i]--;
			i--;
		}
		answer%=10007;
	}
	printf("%d",answer);
}
