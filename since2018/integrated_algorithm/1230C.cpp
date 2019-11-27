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
pii dir[] = { {1,0},{-1,0},{0,1},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1} };
vector<int>link[8];
int ans;
int n,m;
int combination[8];
void bt(int cur,int cnt){
	if(cnt==n){
		int check[8][8]={0};
		int temp=0;
		int i,j;
		for(i=0;i<n;i++){
			for(j=0;j<link[i].size();j++){
				if(check[combination[i]][combination[link[i][j]]]==0){
					check[combination[i]][combination[link[i][j]]]=1;
					check[combination[link[i][j]]][combination[i]]=1;
					temp++;
				}
			}
		}
		ans=max(ans,temp);
		return;
	}
	int i,j;
	for(i=1;i<=6;i++){
		combination[cnt]=i;
		bt(i,cnt+1);
	}
}
int main(){
	cin>>n>>m;
	int i,j;
	for(i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		a--;
		b--;
		link[a].push_back(b);
		link[b].push_back(a);
	}
	bt(1,0);
	printf("%d",ans);
}
