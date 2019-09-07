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
using namespace std;
typedef pair<int,int> pii;
vector<int>forw[100000];
int check[100000];
stack<int>s;
void forward(int pos,bool cnt){
	int i,j;
	int len=forw[pos].size();
	check[pos]=1;
	for(i=0;i<len;i++){
		if(check[forw[pos][i]]==0){
			forward(forw[pos][i],cnt);
		}
	}
	if(cnt)
		s.push(pos);
}
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int i,j;
	for(i=0;i<m;i++){
		int a,b;
		scanf("%d%d",&a,&b);
		forw[a].push_back(b);
	}
	for(i=0;i<n;i++){
		if(check[i]==0)
			forward(i,true);
	}
	memset(check,0,sizeof(check));
	int ans=0;
	while(!s.empty()){
		if(check[s.top()]==0){
			forward(s.top(),false);
			ans++;
		}
		s.pop();
	}
	printf("%d",ans);
}
