#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
long long a[1000000];
int b[1000000];
int main(){
	int n;
	int i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%lld",&a[i]);
		b[i]=1;
	}
	sort(a,a+n);
	int max=1;
	int index=0;
	for(i=1;i<n;i++){
		if(a[i-1]==a[i]){
			b[i]+=b[i-1];
			if(max<b[i]){
				max=b[i];
				index=i;
			}
		}
	}
	printf("%lld",a[index]);
}
