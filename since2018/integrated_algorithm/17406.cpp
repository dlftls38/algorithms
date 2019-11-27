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
struct y{
	int r,c,s;
};
int a[55][55];
int b[55][55];
int c[55][55];
void solve(int r,int c,int s){
	int i,j;
	for(i=c-s+1;i<=c+s;i++){
		a[r-s][i]=b[r-s][i-1];
	}
	for(i=r-s+1;i<=r+s;i++){
		a[i][c+s]=b[i-1][c+s];
	}
	for(i=c-s;i<=c+s-1;i++){
		a[r+s][i]=b[r+s][i+1];
	}
	for(i=r-s;i<=r+s-1;i++){
		a[i][c-s]=b[i+1][c-s];
	}
	if(s>1){
		solve(r,c,s-1);
	}
}
int check[10];
int sequence[10];
vector<y>v;
int ans=INF;
int n,m;
void rot(int cnt,int k){
	int i,j;
	if(cnt==k){
		for(j=0;j<k;j++){
			memcpy(b,a,sizeof(a));
			solve(v[sequence[j]].r,v[sequence[j]].c,v[sequence[j]].s);
		}
		for(int l=1;l<=n;l++){
			int temp=0;
			for(i=1;i<=m;i++){
				temp+=a[l][i];
			}
			ans=min(ans,temp);
		}
		memcpy(a,c,sizeof(a));
		return;
	}
	for(i=0;i<k;i++){
		if(check[i]==0){
			check[i]=1;
			sequence[cnt]=i;
			rot(cnt+1,k);
			check[i]=0;
		}
	}
}
int main(){
	int k;
	cin>>n>>m>>k;
	int i,j;
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	memcpy(c,a,sizeof(a));
	for(int l=0;l<k;l++){
		int r,c,s;
		cin>>r>>c>>s;
		v.push_back({r,c,s});
	}
	rot(0,k);
	printf("%d",ans);
}
