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
int board[12][12];
int sry,srx,sby,sbx,oy,ox;
int ans=11;
int n,m;
void bfs(){
	queue<pair<int,int> >r;
	queue<pair<int,int> >b;
	queue<int>c;
	r.push(make_pair(sry,srx));
	b.push(make_pair(sby,sbx));
	c.push(0);
	int round=0;
	while(!r.empty() && round<100000){
		round++;
		int ry=r.front().first;
		int rx=r.front().second;
		int by=b.front().first;
		int bx=b.front().second;
		int count=c.front();
		r.pop();
		b.pop();
		c.pop();
//		printf("----------------\n");
//		printf("ry=%d rx=%d  by=%d bx%d\n\n\n\n",ry,rx,by,bx);
		if(ans!=11){
			break;
		}
		if(count==10){
			continue;
		}
		if(board[ry-1][rx]!=1 || board[by-1][bx]!=1){
			int checkb=1;
			int checkr=0;
			int mr=0;
			int mb=0;
			for(int i=1;i<10;i++){
				if(board[by-i][bx]==0){
					mb++;
				}
				else if(board[by-i][bx]==5){
					checkb=0;
					break;
				}
				else{
					break;
				}
			}
			for(int i=1;i<10;i++){
				if(board[ry-i][rx]==0){
					mr++;
				}
				else if(board[ry-i][rx]==5){
					checkr=1;
					break;
				}
				else{
					break;
				}
			}
			if(checkb==1){
				if(checkr==1){
					ans=min(ans,count+1);
				}
				else{
					if(by-mb==ry-mr && bx==rx){
						if(by<ry){
							b.push(make_pair(by-mb,bx));
							r.push(make_pair(ry-mr+1,rx));
						}
						else{
							b.push(make_pair(by-mb+1,bx));
							r.push(make_pair(ry-mr,rx));
						}
					}
					else{
						b.push(make_pair(by-mb,bx));
						r.push(make_pair(ry-mr,rx));
					}
					c.push(count+1);
				}
			}
		}
		if(board[ry+1][rx]!=1 || board[by+1][bx]!=1){
			int checkb=1;
			int checkr=0;
			int mr=0;
			int mb=0;
			for(int i=1;i<10;i++){
				if(board[by+i][bx]==0){
					mb++;
				}
				else if(board[by+i][bx]==5){
					checkb=0;
					break;
				}
				else{
					break;
				}
			}
			for(int i=1;i<10;i++){
				if(board[ry+i][rx]==0){
					mr++;
				}
				else if(board[ry+i][rx]==5){
					checkr=1;
					break;
				}
				else{
					break;
				}
			}
			if(checkb==1){
				if(checkr==1){
					ans=min(ans,count+1);
				}
				else{
					if(by+mb==ry+mr && bx==rx){
						if(by<ry){
							b.push(make_pair(by+mb-1,bx));
							r.push(make_pair(ry+mr,rx));
						}
						else{
							b.push(make_pair(by+mb,bx));
							r.push(make_pair(ry+mr-1,rx));
						}
					}
					else{
						b.push(make_pair(by+mb,bx));
						r.push(make_pair(ry+mr,rx));
					}
					c.push(count+1);
				}
			}
		}
		if(board[ry][rx+1]!=1 || board[by][bx+1]!=1){
			int checkb=1;
			int checkr=0;
			int mr=0;
			int mb=0;
			for(int i=1;i<10;i++){
				if(board[by][bx+i]==0){
					mb++;
				}
				else if(board[by][bx+i]==5){
					checkb=0;
					break;
				}
				else{
					break;
				}
			}
			for(int i=1;i<10;i++){
				if(board[ry][rx+i]==0){
					mr++;
				}
				else if(board[ry][rx+i]==5){
					checkr=1;
					break;
				}
				else{
					break;
				}
			}
			if(checkb==1){
				if(checkr==1){
					ans=min(ans,count+1);
				}
				else{
					if(by==ry && bx+mb==rx+mr){
						if(bx<rx){
							b.push(make_pair(by,bx+mb-1));
							r.push(make_pair(ry,rx+mr));
						}
						else{
							b.push(make_pair(by,bx+mb));
							r.push(make_pair(ry,rx+mr-1));
						}
					}
					else{
						b.push(make_pair(by,bx+mb));
						r.push(make_pair(ry,rx+mr));
					}
					c.push(count+1);
				}
			}
		}
		if(board[ry][rx-1]!=1 || board[by][bx-1]!=1){
			int checkb=1;
			int checkr=0;
			int mr=0;
			int mb=0;
			for(int i=1;i<10;i++){
				if(board[by][bx-i]==0){
					mb++;
				}
				else if(board[by][bx-i]==5){
					checkb=0;
					break;
				}
				else{
					break;
				}
			}
			for(int i=1;i<10;i++){
				if(board[ry][rx-i]==0){
					mr++;
				}
				else if(board[ry][rx-i]==5){
					checkr=1;
					break;
				}
				else{
					break;
				}
			}
			if(checkb==1){
				if(checkr==1){
					ans=min(ans,count+1);
				}
				else{
					if(by==ry && bx-mb==rx-mr){
						if(bx<rx){
							b.push(make_pair(by,bx-mb));
							r.push(make_pair(ry,rx-mr+1));
						}
						else{
							b.push(make_pair(by,bx-mb+1));
							r.push(make_pair(ry,rx-mr));
						}
					}
					else{
						b.push(make_pair(by,bx-mb));
						r.push(make_pair(ry,rx-mr));
					}
					c.push(count+1);
				}
			}
		}
		//printf("ry=%d rx=%d  by=%d bx%d\n\n\n\n",r.back().first,r.back().second,b.back().first,b.back().first);
	}
}
int main(){
	scanf("%d%d",&n,&m);
	int i,j;
	char a[11][11];
	for(i=0;i<n;i++){
		scanf("%s",a[i]);
		for(j=0;j<m;j++){
			if(a[i][j]=='R'){
				sry=i+1;
				srx=j+1;	
			}
			if(a[i][j]=='B'){
				sby=i+1;
				sbx=j+1;	
			}
			if(a[i][j]=='O'){
				board[i+1][j+1]=5;
				oy=i+1;
				ox=j+1;	
			}
			if(a[i][j]=='#'){
				board[i+1][j+1]=1;
			}
		}
	}
	bfs();
	if(ans>10){
		printf("-1");
	}
	else{
		printf("%d",ans);
	}
}
