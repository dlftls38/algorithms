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
vector<int>trust[10001];
pair<int,int> ans[10001];
bool cmp(pair<int,int> a,pair<int,int> b){
	if(a.first==b.first){
		return a.second<b.second;
	}
	return a.first>b.first;
}
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int i,j;
	for(i=0;i<m;i++){
		int a,b;
		scanf("%d%d",&a,&b);
		trust[b].push_back(a);
	}
	for(i=1;i<=n;i++){
		int check[10001]={0};
		queue<int>q;
		q.push(i);
		check[i]=1;
		ans[i].second=i;
		//printf("\n\n");
		int sum=1;
		while(!q.empty()){
			int pos=q.front();
			//printf("%d %d\n",pos,cnt);
			q.pop();
			int len=trust[pos].size();
			for(j=0;j<len;j++){
				if(check[trust[pos][j]]==0){
					check[trust[pos][j]]=1;
					q.push({trust[pos][j],});
					sum++;
				}
			}
		}
		ans[i].first=sum;
	}
	sort(ans+1,ans+n+1,cmp);
	int max_val=ans[1].first;
	//printf("\n\n");
	for(i=1;i<=n;i++){
		//printf("%d %d\n",ans[i].first,ans[i].second);
		if(ans[i].first==max_val){
			printf("%d ",ans[i].second);
		}
		else{
			break;
		}
	}
}
