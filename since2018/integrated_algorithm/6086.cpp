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
#define MAX_VALUE 1000000000
#define MOD 1000000009
#define pi 3.141592
using namespace std;
typedef pair<int,int> pii;
int n;
vector<pair<int,int> >v[700];
int check[700];
int solve(int cur,int flow){
	printf("!\n");
	int i,j;
	int ans=0;
	int len=v[cur].size();
	if(len==0){
		if(cur==25){
			return flow;
		}
		else{
			return 0;
		}
	}
	for(i=0;i<len;i++){
		if(check[v[cur][i].first]==0){	
			ans+=solve(v[cur][i].first,min(flow,v[cur][i].second));
		}
		else{
			ans+=check[v[cur][i].first];
		}
	}
	return check[cur] = min(ans,flow);
}
int main(){
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++){
		string A,B;
		cin>>A>>B;
		int a,b,c;
		a=A[0];
		b=B[0];
		scanf("%d",&c);
		if(a>='a')a-='a';
		else a-='A';
		if(b>='a')b-='a';
		else b-='A';
		v[a].push_back({b,c});
	}
	printf("%d",solve(0,INF));
}
