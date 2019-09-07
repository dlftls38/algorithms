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
int n,m;
int a[100][100]={0};
int ans=INT_MIN;
void solve(int sx,int ex,int sy,int ey){
	//printf("%d %d %d %d\n",sx,ex,sy,ey);
	if(ex-sx + ey-sy==0){
		return;
	}
	int i,j,k,l;
	int temp[100][100]={0};
	memcpy(temp,a,sizeof(a));
	for(i=sy;i<ey;i++){
		int longest=ey;
		for(j=i,k=i+1;j>=sy;j--,k++){
			longest=max(longest,k);
			for(l=sx;l<=ex;l++){
				a[k][l]+=temp[j][l];
				ans=max(ans,a[k][l]);
			}
		}
		solve(sx,ex,i+1,longest);
		for(j=i,k=i+1;j>=sy;j--,k++){
			for(l=sx;l<=ex;l++){
				a[k][l]-=temp[j][l];
			}
		}
	}
	for(i=sx;i<ex;i++){
		int longest=ex;
		for(j=i,k=i+1;j>=sx;j--,k++){
			longest=max(longest,k);
			for(l=sy;l<=ey;l++){
				a[l][k]+=temp[l][j];
				ans=max(ans,a[l][k]);
			}
		}
		solve(i+1,longest,sy,ey);
		for(j=i,k=i+1;j>=sx;j--,k++){
			for(l=sy;l<=ey;l++){
				a[l][k]-=temp[l][j];
			}
		}
	}
}
int main(){
	scanf("%d%d",&n,&m);
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
			ans=max(ans,a[i][j]);
		}
	}
	solve(0,m-1,0,n-1);
	printf("%d",ans);
}
