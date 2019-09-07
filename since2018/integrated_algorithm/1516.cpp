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
	int n;
	scanf("%d",&n);
	int i,j;
	int count[501]={0};
	vector<int>ganseon[501];
	queue<int>zero;
	int time[501]={0};
	int ans[501]={0};
	for(i=1;i<=n;i++){
		scanf("%d",&time[i]);
		ans[i]=time[i];
		while(1){
			int b;
			scanf("%d",&b);
			if(b==-1){
				break;
			}
			count[i]++;
			ganseon[b].push_back(i);
		}
	}
	for(i=1;i<=n;i++){
		if(count[i]==0){
			zero.push(i);
		}
	}
	while(!zero.empty()){
		int len=ganseon[zero.front()].size();
		for(i=0;i<len;i++){
			count[ganseon[zero.front()][i]]--;
			ans[ganseon[zero.front()][i]]=max(ans[zero.front()]+time[ganseon[zero.front()][i]],ans[ganseon[zero.front()][i]]);
			if(count[ganseon[zero.front()][i]]==0){
				zero.push(ganseon[zero.front()][i]);
			}
		}
		zero.pop();
	}
	for(i=1;i<=n;i++){
		printf("%d\n",ans[i]);
	}
}
