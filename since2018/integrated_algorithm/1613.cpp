#include <stdio.h>
#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <limits.h>
#include <functional>
#include <math.h>
#include <fstream>
using namespace std;
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	int i,j;
	int count[401]={0};
	vector<int>ganseon[401];
	for(i=0;i<k;i++){
		int a,b;
		scanf("%d%d",&a,&b);
		count[b]++;
		ganseon[a].push_back(b);
	}
	queue<int>zero;
	int ans[401]={0};
	for(i=1;i<=n;i++){
		if(count[i]==0 && ganseon[i].size()>0){
			zero.push(i);
			ans[i]=1;
		}
	}
	while(!zero.empty()){
		int len=ganseon[zero.front()].size();
		for(i=0;i<len;i++){
			if(ans[ganseon[zero.front()][i]]<ans[zero.front()]+1){
				ans[ganseon[zero.front()][i]]=ans[zero.front()]+1;
			}
			count[ganseon[zero.front()][i]]--;
			if(count[ganseon[zero.front()][i]]==0){
				zero.push(ganseon[zero.front()][i]);
			}
		}
		zero.pop();
	}
	int s;
	scanf("%d",&s);
	for(i=0;i<s;i++){
		int q,w;
		scanf("%d%d",&q,&w);
		if(ans[q]==0 || ans[w]==0){
			printf("0\n");
		}
		else if(ans[q]<ans[w]){
			printf("-1\n");
		}
		else if(ans[q]>ans[w]){
			printf("1\n");
		}
		else if(ans[q]==ans[w]){
			printf("0\n");
		}
	}
}
