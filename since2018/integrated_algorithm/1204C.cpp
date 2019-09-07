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
int sequence[1000010];
int ans[1000010];
int main(){
	int n;
	scanf("%d",&n);
	int i,j,k;
	char temp[100][101]={0};
	int link[101][101]={0};
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			link[i][j]=INF;
		}
	}
	for(i=0;i<n;i++){
		scanf("%s",temp[i]);
		for(j=0;j<n;j++){
			if(temp[i][j]=='1'){
				link[i+1][j+1]=1;
			}
		}
	}
	int m;
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d",&sequence[i]);
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			for(k=1;k<=n;k++){
				if(j!=k)
					link[j][k]=min(link[j][k],link[j][i]+link[i][k]);
			}
		}
	}
	ans[0]=sequence[0];
	ans[m-1]=sequence[m-1];
	int cnt=1;
	for(i=0;i<m-1;i++){
		int cur=sequence[i];
		int next=sequence[i+2];
		ans[i]=sequence[i];
		if(cur!=0)
			cnt++;
		if(link[cur][next]==2){
			sequence[i+1]=0;
		}
	}
	printf("%d\n",cnt);
	for(i=0;i<m;i++){
		if(ans[i]!=0)
			printf("%d ",ans[i]);
	}
}
