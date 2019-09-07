#include <bits/stdc++.h>
#define INF 987654321
#define MOD 1000000009
#define pi 3.141592
using namespace std;
typedef pair<int,int> pii;
vector<int>v[1000010];
int arrive;
int n,m;
int flag;
void dfs(int y,int x){
	if(flag==1){
		v[y][x]=0;
		return;
	}
	if(y==n-1 && x==m-1){
		flag=1;
		arrive++;
		return;
	}
	if(y+1<n && v[y+1][x]==0){
		v[y+1][x]=1;
		dfs(y+1,x);
	}
	if(x+1<m && v[y][x+1]==0){
		v[y][x+1]=1;
		dfs(y,x+1);
	}
}
int main(){
	scanf("%d%d",&n,&m);
	int i,j;
	for(i=0;i<n;i++){
		string s;
		cin>>s;
		for(j=0;j<m;j++){
			if(s[j]=='.'){
				v[i].push_back(0);
			}
			else{
				v[i].push_back(1);
			}
		}
	}
	dfs(0,0);
	flag=0;
	v[n-1][m-1]=0;
	dfs(0,0);
	printf("%d",arrive);
}
