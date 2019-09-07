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
int frog_interest[3000][4];
vector<int>flower[3000];
vector<pair<int,int> >logg[3000];
int flower_check[3000];
int frog_check[3000];
int n;
int ans[3000];
void solve(int flower_pos){
	//printf("%d\n",flower_pos+1);
	int i,j;
	if(flower_pos==n){
		printf("YES\n");
		for(i=0;i<n;i++){
			printf("%d ",ans[i]+1);
		}
		exit(0);
	}
	int len=flower[flower_pos].size();
	for(i=0;i<len;i++){
		if(frog_check[flower[flower_pos][i]]==0){
			int len2=logg[flower_pos].size();
			int accept=0;
			for(j=0;j<len2;j++){
				if(flower_check[logg[flower_pos][j].first]==1 && frog_interest[flower[flower_pos][i]][logg[flower_pos][j].second] != frog_interest[ans[logg[flower_pos][j].first]][logg[flower_pos][j].second]){
					accept=1;
					break;
				}
			}
			if(accept==1){
				continue;
			}
			frog_check[flower[flower_pos][i]]=1;
			flower_check[flower_pos]=1;
			ans[flower_pos]=flower[flower_pos][i];
			solve(flower_pos+1);
			frog_check[flower[flower_pos][i]]=0;
			flower_check[flower_pos]=0;
		}
	}
}
int main(){
	int m;
	scanf("%d%d",&n,&m);
	int i,j;
	for(i=0;i<n;i++){
		int food,hobby,familiy,philosophy;
		scanf("%d%d%d%d",&food,&hobby,&familiy,&philosophy);
		frog_interest[i][0]=food;
		frog_interest[i][1]=hobby;
		frog_interest[i][2]=familiy;
		frog_interest[i][3]=philosophy;
	}
	for(i=0;i<n;i++){
		int flower1,flower2;
		scanf("%d%d",&flower1,&flower2);
		flower[flower1-1].push_back(i);
		flower[flower2-1].push_back(i);
	}
	for(i=0;i<m;i++){
		int a,b,t;
		scanf("%d%d%d",&a,&b,&t);
		logg[a-1].push_back({b-1,t-1});
		logg[b-1].push_back({a-1,t-1});
	}
	solve(0);
	printf("NO");
}
