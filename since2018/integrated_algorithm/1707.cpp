#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
vector<int>line[200001];
int v,e;
int answer;
void dfs(int position, int *check, int color){
	if(check[position]==0)
		check[position]=1;
	for(int i=0;i<line[position].size();i++){
		if(color==1){
			if(check[line[position][i]]==0){
				check[line[position][i]]=2;
				dfs(line[position][i],check,2);
			}
			else if(check[line[position][i]]==1){
				answer=1;
			}
		}
		else{
			if(check[line[position][i]]==0){
				check[line[position][i]]=1;
				dfs(line[position][i],check,1);
			}
			else if(check[line[position][i]]==2){
				answer=1;
			}
		}
	}
}
int main(){
	int t;
	scanf("%d",&t);
	int i,j;
	for(i=0;i<t;i++){
		scanf("%d%d",&v,&e);
		for(j=1;j<200001;j++){
			line[j].clear();
		}
		for(j=0;j<e;j++){
			int q,w;
			scanf("%d%d",&q,&w);
			line[q].push_back(w);
			line[w].push_back(q);
		}
		int check[20001]={0};
		answer=0;
		for(j=1;j<v+1;j++){
			if(check[j]==0)
				dfs(j,check,1);	
		}
		if(answer==1){
			printf("NO\n");
		}
		else{
			printf("YES\n");
		}
	}
}
