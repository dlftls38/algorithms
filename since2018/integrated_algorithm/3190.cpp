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
int board[102][102];
int n;
queue<pair<int,char> >direction;
void bfs(){
	queue<pair<int,int> >q;
	q.push(make_pair(1,1));
	int time=0;
	int head=1;
	int ty=1;
	int tx=1;
	int y=1;
	int x=1;
	while(1){
		time++;
		if(head==0){
			y--;
		}
		else if(head==1){
			x++;
		}
		else if(head==2){
			y++;
		}
		else{
			x--;
		}
		if(y==0 || x==0 || y==n+1 || x==n+1 || board[y][x]==1){
			break;
		}
		q.push(make_pair(y,x));
		if(board[y][x]==0){
			board[ty][tx]=0;
			q.pop();
			ty=q.front().first;
			tx=q.front().second;
		}
		board[y][x]=1;
		if(direction.front().first==time){
			if(direction.front().second=='D'){
				head++;
				head%=4;
			}
			else{
				head--;
				if(head<0){
					head+=4;
				}
			}
			direction.pop();
		}
	}
	printf("%d",time);
}
int main(){
	int k;
	scanf("%d%d",&n,&k);
	int i,j;
	for(i=0;i<k;i++){
		int y,x;
		scanf("%d%d",&y,&x);
		board[y][x]=5;
	}
	board[1][1]=1;
	int l;
	scanf("%d",&l);
	for(i=0;i<l;i++){
		int when;
		char d[2];
		scanf("%d%s",&when,d);
		direction.push(make_pair(when,d[0]));
	}
	bfs();
}
