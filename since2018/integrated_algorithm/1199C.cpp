#include <stdio.h>
#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <limits.h>
#include <functional>
#include <math.h>
#include <fstream>
#define INF 987654321
using namespace std;
int a[400000];
int b[400000];
int c[400000];
int main(){
	int n,ii;
	scanf("%d%d",&n,&ii);
	int i,j;
	map<int,int>mp;
	int cnt=0;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(mp[a[i]]==0){
			cnt++;
		}
		mp[a[i]]++;
	}
	sort(a,a+n);
	int tail=0;
	for(i=0;i<n;i++){
		if(i==0)
			b[tail++]=a[i];
		else{
			if(b[tail-1]!=a[i]){
				b[tail++]=a[i];
			}
		}
	}
	for(i=0;i<tail;i++){
		c[i]=mp[b[i]];
		if(i>0){
			c[i]+=c[i-1];
		}
	}
	int s=0,e=mp[a[0]];
	int ans=INT_MAX;
	while(s<n){
		auto q=lower_bound(b,b+tail,a[s]);
		auto w=upper_bound(b,b+tail,a[e-1]);
		auto r=(int)ceil(log2((int)(w-q)))*n;
		if(r<=ii*8){
			int sum=c[w-b-1];
			if(q-b-1>=0){
				sum-=c[q-b-1];
			}
			ans=min(ans,n-sum);
		}
		if((e==n || r>ii*8)){
			s+=mp[a[s]];
		}
		else{
			e+=mp[a[e]];
		}
	}
	printf("%d",ans);
}
