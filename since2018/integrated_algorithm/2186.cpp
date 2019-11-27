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
struct state{
	char y,x,cnt;
};
int dp[123][123][123];
string word;
int len;
int n,m,k;
char a[123][123];
int ans;
int solve(int y, int x, int pos){
	if(pos==len){
		return 1;
	}
	int &ret = dp[y][x][pos];
	if(ret!=-1){
		return ret;
	}
	ret=0;
	int i,j;
	for(i=1;i<=k;i++){
		if(y+i<n && a[y+i][x]==word[pos]){
			ret+=solve(y+i,x,pos+1);
		}
		if(y-i>=0 && a[y-i][x]==word[pos]){
			ret+=solve(y-i,x,pos+1);
		}
		if(x+i<m && a[y][x+i]==word[pos]){
			ret+=solve(y,x+i,pos+1);
		}
		if(x-i>=0 && a[y][x-i]==word[pos]){
			ret+=solve(y,x-i,pos+1);
		}
	}
	return ret;
}
int main(){
	scanf("%d%d%d",&n,&m,&k);
	int i,j,l;
	for(i=0;i<n;i++){
		scanf("%s",a[i]);
	}
	cin>>word;
	len=word.length();
	for(i=0;i<123;i++){
		for(j=0;j<123;j++){
			for(l=0;l<123;l++){
				dp[i][j][l]=-1;
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(a[i][j]==word[0]){
				ans+=solve(i,j,1);
			}
		}
	}
	printf("%d",ans);
}
