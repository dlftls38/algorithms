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
pair<int,int>client[100];
pair<int,int>chicken[13];
int size1,size2;
int m,sequence[13];
int ans=INT_MAX;
int dist(int x1,int y1,int x2,int y2){
	return abs(x1-x2)+abs(y1-y2);
}
void backtracking(int pos,int cnt){
	int i,j;
	if(cnt==m){
		int temp=0;
		for(i=0;i<size1;i++){
			int temp2=INT_MAX;
			for(j=0;j<m;j++){
				temp2=min(temp2,dist(client[i].first,client[i].second,chicken[sequence[j]].first,chicken[sequence[j]].second));
			}
			temp+=temp2;
		}
		ans=min(ans,temp);
		return;
	}
	if(pos==size2){
		return;
	}
	for(i=pos;i<size2;i++){
		sequence[cnt]=i;
		backtracking(i+1,cnt+1);
	}
}
int main(){
	int n;
	scanf("%d%d",&n,&m);
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			int a;
			scanf("%d",&a);
			if(a==1){
				client[size1].first=i;
				client[size1].second=j;
				size1++;
			}
			if(a==2){
				chicken[size2].first=i;
				chicken[size2].second=j;
				size2++;
			}
		}
	}
	backtracking(0,0);
	printf("%d",ans);
}
