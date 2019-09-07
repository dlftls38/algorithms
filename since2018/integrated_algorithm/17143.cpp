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
queue<pair<pair<pair<int,int>,pair<int,int> >,int> >q;
int ans;
int r,c;
int y,x,s,d,z;
void bfs(){
	int i,j,k;
	for(i=1;i<=c;i++){
		int velocity[102][102]={0};
		int direction[102][102]={0};
		int big[102][102]={0};
		int size=q.size();
		for(j=0;j<size;j++){
			y=q.front().first.first.first;
			x=q.front().first.first.second;
			s=q.front().first.second.first;
			d=q.front().first.second.second;
			z=q.front().second;
			if(big[y][x]>0 && big[y][x]<z || big[y][x]==0){
				big[y][x]=z;
				direction[y][x]=d;
				velocity[y][x]=s;
			}
			q.pop();
		}
		for(j=1;j<=r;j++){
			if(big[j][i]>0){
				ans+=big[j][i];
				big[j][i]=0;
				direction[j][i]=0;
				velocity[j][i]=0;
				break;
			}
		}
		for(j=1;j<=r;j++){
			for(k=1;k<=c;k++){
				y=j;
				x=k;
				s=velocity[y][x];
				d=direction[y][x];
				z=big[y][x];
				if(z>0){
					int ss=s;
					while(ss>0){
						if(d==1){
							if(y-1<=ss){
								ss-=y-1;
								y=1;
								d=2;
							}
							else{
								y-=ss;
								break;
							}
						}
						else if(d==2){
							if(r-y<=ss){
								ss-=r-y;
								y=r;
								d=1;
							}
							else{
								y+=ss;
								break;
							}
						}
						else if(d==3){
							if(c-x<=ss){
								ss-=c-x;
								x=c;
								d=4;
							}
							else{
								x+=ss;
								break;
							}
						}
						else{
							if(x-1<=ss){
								ss-=x-1;
								x=1;
								d=3;
							}
							else{
								x-=ss;
								break;
							}
						}
					}
					q.push(make_pair(make_pair(make_pair(y,x),make_pair(s,d)),z));
				}
			}
		}
	}
}
int main(){
	int m;
	scanf("%d%d%d",&r,&c,&m);
	int i,j;
	for(i=0;i<m;i++){
		scanf("%d%d%d%d%d",&y,&x,&s,&d,&z);
		q.push(make_pair(make_pair(make_pair(y,x),make_pair(s,d)),z));
	}
	bfs();
	printf("%d",ans);
}
