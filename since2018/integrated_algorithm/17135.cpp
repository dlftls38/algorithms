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
int original[23][23];
int board[23][23];
int n,m,d;
int archer[3];
int ans,score;
struct w{
	int d,x,y;
};
bool cmp(struct w a, struct w b){
	if(a.d<b.d){
		return true;
	}
	else if(a.d==b.d){
		if(a.x<b.x){
			return true;
		}
		else{
			return false;
		}
	}
	else{
		return false;
	}
}
bool move(){
	int cnt=0;
	int i,j;
	for(i=n-1;i>=0;i--){
		for(j=0;j<m;j++){
			if(board[i][j]==1){
				board[i+1][j]=1;
				board[i][j]=0;
				cnt++;
			}
		}
	}
	if(cnt>0){
		return false;
	}
	else{
		return true;
	}
}
void solve(){
	int i,j;
	while(1){
		vector<w>s1;
		vector<w>s2;
		vector<w>s3;
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				if(board[i][j]==1){
					if(abs(archer[0]-j)+abs(n-i)<=d){
						s1.push_back({abs(archer[0]-j)+abs(n-i),j,i});
					}
					if(abs(archer[1]-j)+abs(n-i)<=d){
						s2.push_back({abs(archer[1]-j)+abs(n-i),j,i});
					}
					if(abs(archer[2]-j)+abs(n-i)<=d){
						s3.push_back({abs(archer[2]-j)+abs(n-i),j,i});
					}
				}
			}
		}
		sort(s1.begin(),s1.end(),cmp);
		sort(s2.begin(),s2.end(),cmp);
		sort(s3.begin(),s3.end(),cmp);
		if(s1.size()>0){
			score+=board[s1[0].y][s1[0].x];
			board[s1[0].y][s1[0].x]=0;	
		}
		if(s2.size()>0){
			score+=board[s2[0].y][s2[0].x];
			board[s2[0].y][s2[0].x]=0;
		}
		if(s3.size()>0){
			score+=board[s3[0].y][s3[0].x];
			board[s3[0].y][s3[0].x]=0;
		}
		if(move()){
			ans=max(ans,score);
			break;
		}
	}
}
//		for(i=0;i<n;i++){
//			for(j=0;j<m;j++){
//				printf("%d ",board[i][j]);
//			}
//			printf("\n");
//		}
void assign(int pos, int cnt){
	if(cnt==3){
		memcpy(board,original,sizeof(board));
		score=0;
		solve();
		return;
	}
	if(pos==m){
		return;
	}
	for(int i=pos;i<m;i++){
		archer[cnt]=i;
		assign(i+1,cnt+1);
	}
}
int main(){
	cin>>n>>m>>d;
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cin>>original[i][j];
		}
	}
	assign(0,0);
	printf("%d",ans);
}
