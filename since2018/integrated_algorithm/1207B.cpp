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
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int i,j;
	int a[100][100]={0};
	int b[100][100]={0};
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	set<pair<int,int> >s;
	for(i=1;i<n;i++){
		for(j=1;j<m;j++){
			if(a[i][j]==1 && a[i+1][j]==1 && a[i][j+1]==1 && a[i+1][j+1]==1){
				s.insert({i,j});
				b[i][j]=1;
				b[i][j+1]=1;
				b[i+1][j]=1;
				b[i+1][j+1]=1;
			}
		}
	}
	for(i=1;i<n;i++){
		if(a[i][m]==1 && b[i][m]==0){
			s.insert({i,m-1});
			b[i][m-1]=1;
			b[i][m]=1;
			b[i+1][m]=1;
			b[i+1][m-1]=1;
		}
	}
	for(i=1;i<m;i++){
		if(a[n][i]==1 && b[n][i]==0){
			s.insert({n-1,i});
			b[n-1][i]=1;
			b[n-1][i+1]=1;
			b[n][i]=1;
			b[n][i+1]=1;
		}
	}
	if(a[n][m]==1 && b[n][m]==0){
		s.insert({n-1,m-1});
		b[n][m]=1;
		b[n][m-1]=1;
		b[n-1][m]=1;
		b[n-1][m-1]=1;
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			if(a[i][j]!=b[i][j]){
				printf("-1");
				return 0;
			}
		}
	}
	printf("%d\n",s.size());
	for(auto it : s){
		printf("%d %d\n",it.first,it.second);
	}
}

