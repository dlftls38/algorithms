#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	long long answer=1;
	for(int i=m-(n-1);i<m;i++){
		answer*=i;
	}
	for(int i=2;i<n;i++){
		answer/=i;
	}
	printf("%lld",answer);
}
