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
vector<int>forw[10001];
vector<int>back[10001];
int check[10001];
stack<int>s;
vector<vector<int> >ans;
int v,tail;
bool cmp(vector<int> a,vector<int> b){
	return a[0]<b[0];
}
void forward(int pos){
	int i,j;
	int len=forw[pos].size();
	check[pos]=1;
	for(i=0;i<len;i++){
		if(check[forw[pos][i]]==0){
			forward(forw[pos][i]);
		}
	}
	s.push((pos));
}
void backward(int pos){
	int i,j;
	int len=back[pos].size();
	check[pos]=2;
	for(i=0;i<len;i++){
		if(check[back[pos][i]]==1){
			backward(back[pos][i]);
		}
	}
	ans[tail].push_back(pos);
}
int main(){
	int e;
	scanf("%d%d",&v,&e);
	int i,j;
	for(i=0;i<e;i++){
		int a,b;
		scanf("%d%d",&a,&b);
		forw[a].push_back(b);
		back[b].push_back(a);
	}
	for(i=1;i<=v;i++){
		if(check[i]==0)
			forward(i);
	}
	while(!s.empty()){
		if(check[s.top()]==1){
			ans.resize(tail+1);
			backward(s.top());
			tail++;	
		}
		s.pop();
	}
	for(i=0;i<tail;i++){
		sort(ans[i].begin(),ans[i].end());
	}
	sort(ans.begin(),ans.end(),cmp);
	printf("%d\n",tail);
	for(i=0;i<tail;i++){
		int len=ans[i].size();
		for(j=0;j<len;j++){
			printf("%d ",ans[i][j]);
		}
		printf("-1\n");
	}
}
