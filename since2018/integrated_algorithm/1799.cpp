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
int n;
int board[10][10];
vector<pair<int,int> >black;
vector<pair<int,int> >white;
int white_size;
int black_size;
int ans1;
int ans2;
void solve1(int pos,int cnt){
	ans1=max(ans1,cnt);
	if(pos==black_size)return;
	if(black_size-pos+cnt<=ans1)return;
	int i,j;
	for(i=pos;i<black_size;i++){
		int y=black[i].first;
		int x=black[i].second;
		int check=0;
		for(j=1;y-j>=0 && x-j>=0;j++){
			if(board[y-j][x-j]==1){
				check=1;
				break;
			}
		}
		for(j=1;y-j>=0 && x+j<n;j++){
			if(board[y-j][x+j]==1){
				check=1;
				break;
			}
		}
		if(check==0){
			board[y][x]=1;
			solve1(i+1,cnt+1);
			board[y][x]=0;
		}
	}
}
void solve2(int pos,int cnt){
	ans2=max(ans2,cnt);
	if(pos==white_size)return;
	if(white_size-pos+cnt<=ans2)return;
	int i,j;
	for(i=pos;i<white_size;i++){
		int y=white[i].first;
		int x=white[i].second;
		int check=0;
		for(j=1;y-j>=0 && x-j>=0;j++){
			if(board[y-j][x-j]==1){
				check=1;
				break;
			}
		}
		for(j=1;y-j>=0 && x+j<n;j++){
			if(board[y-j][x+j]==1){
				check=1;
				break;
			}
		}
		if(check==0){
			board[y][x]=1;
			solve2(i+1,cnt+1);
			board[y][x]=0;
		}
	}
}
int main(){
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			int x;
			scanf("%d",&x);
			if(x==1){
				if((i+j)%2==0){
					black.push_back({i,j});
				}
				else{
					white.push_back({i,j});
				}
			}
		}
	}
	white_size=white.size();
	black_size=black.size();
	solve1(0,0);
	solve2(0,0);
	printf("%d",ans1+ans2);
}
