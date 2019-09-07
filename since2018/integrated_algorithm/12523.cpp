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
	int tc;
	scanf("%d",&tc);
	int i,j,k;
	for(i=1;i<=tc;i++){
		int n;
		scanf("%d",&n);
		vector<int>followers[1001];
		for(j=1;j<=n;j++){
			int monk;
			scanf("%d",&monk);
			followers[monk].push_back(j);
		}
		printf("Case #%d:\n",i);
		for(j=1;j<=n;j++){
			queue<int>q;
			q.push(j);
			int check[1001]={0};
			check[j]=1;
			int cnt=0;
			while(!q.empty()){
				int cur_monk=q.front();
				q.pop();
				cnt++;
				int size=followers[cur_monk].size();
				for(k=0;k<size;k++){
					if(check[followers[cur_monk][k]]==0){
						check[followers[cur_monk][k]]=1;
						q.push(followers[cur_monk][k]);
					}
				}
			}
			printf("%d\n",cnt);
		}
	}
}
