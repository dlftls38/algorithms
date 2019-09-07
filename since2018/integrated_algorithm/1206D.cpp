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
long long input[100000];
int link[200][200];
int n,ans=INF;
int check[200];
void dfs(int cur, int cnt, int prev){
	if(cnt>=ans)return;
	for(int i=0;i<n;i++){
		if(link[cur][i]==1){
			if(check[i]==0){
				check[i]=1;
				dfs(i,cnt+1,cur);
				check[i]=0;
			}
			else{
				if(prev!=i){
					ans=min(ans,cnt);
					return;
				}
			}
		}
	}
}
int main(){
	scanf("%d",&n);
	int i,j;
	int cnt=0;
	for(i=0;i<n;i++){
		scanf("%lld",&input[i]);
		if(input[i]!=0){
			input[cnt++]=input[i];
		}
	}
	n=cnt;
	if(n>200){
		printf("3");
		return 0;
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			link[i][j]=INF;
		}
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(input[i]&input[j]){
				link[i][j]=1;
				link[j][i]=1;
			}
		}
	}
	for(i=0;i<n;i++){
		check[i]=1;
		dfs(i,1,i);
		check[i]=0;
	}
	if(ans==INF){
		printf("-1");
	}
	else{
		printf("%d",ans);
	}
}
