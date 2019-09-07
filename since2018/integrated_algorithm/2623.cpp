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
using namespace std;
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int i,j;
	int count[1001]={0};
	vector<int>ganseon[1001];
	for(i=0;i<m;i++){
		int cnt;
		scanf("%d",&cnt);
		int a[1001]={0};
		for(j=0;j<cnt;j++){
			scanf("%d",&a[j]);
			if(j>0){
				count[a[j-1]]++;
				ganseon[a[j]].push_back(a[j-1]);
			}
		}
	}
	queue<int>zero;
	int ans[1001]={0};
	for(i=1;i<=n;i++){
		if(count[i]==0){
			zero.push(i);
			ans[i]=1;
		}
	}
	while(!zero.empty()){
		int len=ganseon[zero.front()].size();
		for(i=0;i<len;i++){
			count[ganseon[zero.front()][i]]--;
			if(ans[ganseon[zero.front()][i]]<ans[zero.front()]+1){
				ans[ganseon[zero.front()][i]]=ans[zero.front()]+1;
			}
			if(count[ganseon[zero.front()][i]]==0){
				zero.push(ganseon[zero.front()][i]);
			}
		}
		zero.pop();
	}
	vector<int>res[1001];
	for(i=1;i<=n;i++){
		if(ans[i]==0){
			printf("0");
			return 0;
		}
		res[ans[i]].push_back(i);
	}
	for(i=n;i>=1;i--){
		for(j=0;j<res[i].size();j++){
			printf("%d\n",res[i][j]);
		}
	}
}
