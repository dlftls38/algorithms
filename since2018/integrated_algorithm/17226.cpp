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
vector<pair<pair<int,int>,int>>a;
vector<pair<int,int>>b;
vector<string>logs;
int n,m;
int ans=0;
void solve(int cur){
	if(ans==1){
		return;
	}
	int i,j;
	if(cur==n){
//		printf("----------------\n");
//		for(i=0;i<n;i++){
//			printf("%d ",a[i].first.second);
//		}
//		printf("\n");
//		for(i=0;i<m;i++){
//			printf("%d ",b[i].second);
//		}
//		printf("\n");
//		printf("----------------\n");
		int check[13]={0};
		for(i=0;i<n;i++){
			if(a[i].first.second>0)
				check[a[i].first.second]++;
		}
		for(i=0;i<m;i++){
			if(b[i].second>0)
				check[b[i].second]++;
		}
		int start=1;
		for(i=1;i<=12;i++){
			if(check[i]>0){
				if(start==i){
					start++;
				}
				else{
					return;
				}
			}
		}
		ans=1;
		logs.push_back("use modok");
		printf("%d\n",logs.size());
		for(auto it : logs){
			printf("%s\n",it.c_str());
		}
//		printf("----------------\n");
//		for(i=0;i<n;i++){
//			printf("%d ",a[i].first.second);
//		}
//		printf("\n");
//		for(i=0;i<m;i++){
//			printf("%d ",b[i].second);
//		}
//		printf("\n");
//		printf("----------------\n");
	}
	else{
		for(i=0;i<m;i++){
			if(b[i].second>0){
				b[i].second-=a[cur].first.first;
				a[cur].first.second-=b[i].first;
				char temp[20]={0};
				sprintf(temp,"attack %d %d",a[cur].second+1,i+1);
				logs.push_back(temp);
				solve(cur+1);
				logs.erase(logs.begin()+logs.size()-1);
				b[i].second+=a[cur].first.first;
				a[cur].first.second+=b[i].first;
			}
		}
		solve(cur+1);
	}
}
int main(){
	scanf("%d%d",&n,&m);
	int i,j;
	for(i=0;i<n;i++){
		int q,w;
		scanf("%d%d",&q,&w);
		a.push_back({{q,w},i});
	}
	sort(a.begin(),a.end());
	for(i=0;i<m;i++){
		int q,w;
		scanf("%d%d",&q,&w);
		b.push_back({q,w});
	}
	solve(0);
	if(ans==0 && m==0){
		printf("0");
	}
	else if(ans==0){
		printf("-1");
	}
}
