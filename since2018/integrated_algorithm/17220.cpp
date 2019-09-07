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
using namespace std;
typedef pair<int,int> pii;
int line[26][26];
int supply[26];
int check[26];
vector<int>origin;
int ans,n;
void dfs(int pos){
	ans++;
	for(int i=0;i<n;i++){
		if(line[pos][i]==1 && check[i]==0){
			check[i]=1;
			dfs(i);
		}
	}
}
int main(){
	int m;
	scanf("%d%d",&n,&m);
	int i,j;
	for(i=0;i<m;i++){
		char a[2],b[2];
		scanf("%s%s",a,b);
		line[a[0]-65][b[0]-65]=1;
		supply[b[0]-65]++;
	}
	for(i=0;i<n;i++){
		if(supply[i]==0){
			origin.push_back(i);
		}
	}
	int k;
	scanf("%d",&k);
	for(i=0;i<k;i++){
		char a[2];
		scanf("%s",a);
		check[a[0]-65]=1;
	}
	for(i=0;i<origin.size();i++){
		if(check[origin[i]]==0){
			for(j=0;j<n;j++){
				if(line[origin[i]][j]==1 && check[j]==0){
					check[j]=1;
					dfs(j);
				}
			}
		}
	}
	printf("%d",ans);
}
