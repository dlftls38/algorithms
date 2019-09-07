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
int ans=9000;
int n;
int t[10][10];
void solve(int check,int cur,int val){
	if(check==(1<<n)-1){
		ans=min(ans,val);
		return;
	}
	for(int i=0;i<n;i++){
		if(i!=cur && (check&(1<<i))==0 && val+t[cur][i]<ans){
			solve(check|(1<<i),i,val+t[cur][i]);
		}
	}
}
int main(){
	int k;
	scanf("%d%d",&n,&k);
	int i,j,l;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&t[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			for(l=0;l<n;l++){
				if(j!=l){
					t[j][l]=min(t[j][l],t[j][i]+t[i][l]);
				}
			}
		}
	}
	cnt[k]=1;
	solve((1<<k),k,0);
	printf("%d",ans);
}
