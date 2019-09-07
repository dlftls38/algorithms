#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <functional> 
#include <limits.h>
using namespace std;
int a[30];
vector <int> v1;
vector <int> v2;
int c;
void dfs(int start, int end, int sum, vector <int> &v){
	if(sum>c) return;
	if(start>end) return v.push_back(sum);
	dfs(start+1,end,sum,v);
	dfs(start+1,end,sum+a[start],v);
}
int main(){
	int n;
	int i,j;
	scanf("%d%d",&n,&c);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	dfs(0,n/2,0,v1);
	dfs(n/2+1,n-1,0,v2);
	sort(v1.begin(),v1.end());
	sort(v2.begin(),v2.end());
	int len1=v1.size();
	int len2=v2.size();
	int ans=0;
	for(i=0;i<len1;i++){
		while(len2>0 && v1[i]+v2[len2-1]>c) len2--;
		ans+=len2;
	}
	printf("%d",ans);
}
