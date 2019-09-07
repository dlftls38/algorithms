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
int n,w;
int dp[1002][1002];
pair<int,int>pos[1002];
int car[1002][1002];
int dist(int x1,int y1,int x2,int y2){
	return abs(x1-x2)+abs(y1-y2);
}
int recur(int x,int y){
	int next=max(x,y)+1;
	if(next==w+2){
		return 0;
	}
	int &ret=dp[x][y];
	if(ret!=0){
		return ret;
	}
	int next_x = recur(next,y) + dist(pos[x].first,pos[x].second,pos[next].first,pos[next].second);
	int next_y = recur(x,next) + dist(pos[y].first,pos[y].second,pos[next].first,pos[next].second);
	if(next_x<next_y){
		ret=next_x;
		car[x][y]=1;
	}
	else{
		ret=next_y;
		car[x][y]=2;
	}
	return ret;
}
int main(){
	scanf("%d%d",&n,&w);
	int i,j;
	for(i=2;i<w+2;i++){
		int x,y;
		scanf("%d%d",&x,&y);
		pos[i]={x,y};
	}
	pos[0]={1,1};
	pos[1]={n,n};
	printf("%d\n",recur(0,1));
	for(int x=0, y=1;max(x,y)+1<w+2;){
		printf("%d\n",car[x][y]);
		if(car[x][y]==1){
			x=max(x,y)+1;
		}
		else{
			y=max(x,y)+1;
		}
	}
}
