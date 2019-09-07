#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <limits.h>
#include <functional>
using namespace std;
int main(){
	int n,a[2][15]={0},ans=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d%d",&a[0][i],&a[1][i]);
	for(int i=0;i<n;i++){
		int max_temp=0;
		for(int j=i-1;j>=0;j--)
			if(a[0][j]+j<=i)
				max_temp=max(max_temp,a[1][j]);
		a[1][i]+=max_temp;
		if(a[0][i]+i<=n)
			ans=max(ans,a[1][i]);
	}
	printf("%d",ans);
}
