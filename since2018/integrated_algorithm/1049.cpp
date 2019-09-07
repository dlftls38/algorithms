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
	int n,m;
	scanf("%d%d",&n,&m);
	int i,j;
	int a[50]={0};
	int b[50]={0};
	for(i=0;i<m;i++){
		scanf("%d%d",&a[i],&b[i]);
	}
	sort(a,a+m);
	sort(b,b+m);
	if(a[0]<b[0]*6){
		int ans=0;
		ans+=(n/6)*a[0];
		n%=6;
		if(n>0){
			if(a[0]<b[0]*n){
				ans+=a[0];
			}
			else{
				ans+=b[0]*n;
			}
		}
		printf("%d",ans);
	}
	else{
		printf("%d",b[0]*n);
	}
}
