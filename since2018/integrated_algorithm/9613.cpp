#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int gcd(int a, int b)
{	
    if (b == 0)
        return a;
    gcd(b, a%b);
}

int main(){
	int t;
	scanf("%d",&t);
	int i,j,k;
	for(i=0;i<t;i++){
		int n;
		scanf("%d",&n);
		int a[100]={0};
		for(j=0;j<n;j++){
			scanf("%d",&a[j]);
		}
		long long answer=0;
		for(j=0;j<n-1;j++){
			for(k=j+1;k<n;k++){
				answer+=gcd(a[j],a[k]);
			}
		}
		printf("%lld\n",answer);
	}
}
