#include <bits/stdc++.h>
#define INF 987654321
#define MOD 1000000009
#define pi 3.141592
using namespace std;
typedef pair<int,int> pii;
vector<int>v[1000010];
int main(){
	int n,m;
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
	queue<pair<pair<int,int>,vector<pair<int,int>>>>q;
	q.push({{0,0},{}});
	int arrive=0;
	while(!q.empty()){
		int y=q.front().first.first;
		int x=q.front().first.second;
		vector<pair<int,int>>backtrack=q.front().second;
		q.pop();
		if(y==n-1 && x==m-1){
			int size=backtrack.size();
			for(i=0;i<size;i++){
				v[backtrack[i].first][backtrack[i].second]=1;
			}
			for(i=0;i<n;i++){
				for(j=0;j<m;j++){
					if(v[i][j]==2){
						v[i][j]=0;
					}
				}
			}
			v[0][0]=0;
			v[y][x]=0;
			arrive++;
			break;
		}
		if(y+1<n && v[y+1][x]==0){
			v[y+1][x]=2;
			backtrack.push_back({y,x});
			q.push({{y+1,x},backtrack});
			backtrack.erase(backtrack.begin()+y+x);
		}
		if(x+1<m && v[y][x+1]==0){
			v[y][x+1]=2;
			backtrack.push_back({y,x});
			q.push({{y,x+1},backtrack});
			backtrack.erase(backtrack.begin()+y+x);
		}
	}
	queue<pair<pair<int,int>,vector<pair<int,int>>>>qq;
	qq.push({{0,0},{}});
	while(!qq.empty()){
		int y=qq.front().first.first;
		int x=qq.front().first.second;
		vector<pair<int,int>>backtrack=qq.front().second;
		qq.pop();
		if(y==n-1 && x==m-1){
			arrive++;
			break;
		}
		if(y+1<n && v[y+1][x]==0){
			v[y+1][x]=2;
			backtrack.push_back({y,x});
			qq.push({{y+1,x},backtrack});
			backtrack.erase(backtrack.begin()+y+x);
		}
		if(x+1<m && v[y][x+1]==0){
			v[y][x+1]=2;
			backtrack.push_back({y,x});
			qq.push({{y,x+1},backtrack});
			backtrack.erase(backtrack.begin()+y+x);
		}
	}
	printf("%d",arrive);
}
