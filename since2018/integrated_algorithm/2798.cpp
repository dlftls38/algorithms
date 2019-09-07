#include <stdio.h>
#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <limits.h>
#include <functional>
#include <math.h>
#include <fstream>
using namespace std;
int a[100];
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int i,j,k;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int ans=0;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			for(k=j+1;k<n;k++){
				if(a[i]+a[j]+a[k]<=m){
					ans=max(ans,a[i]+a[j]+a[k]);
				}
			}
		}
	}
	printf("%d",ans);
}
