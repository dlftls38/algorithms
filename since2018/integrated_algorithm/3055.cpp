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
char a[51][51];
int main(){
	int r,c;
	scanf("%d%d",&r,&c);
	int i,j;
	queue<pair<pair<int,int>,int> >animal;
	queue<pair<int,int> >water;
	for(i=0;i<r;i++){
		scanf("%s",a[i]);
		for(j=0;j<c;j++){
			if(a[i][j]=='S'){
				animal.push(make_pair(make_pair(i,j),0));
			}
			if(a[i][j]=='*'){
				water.push(make_pair(i,j));
			}
		}
	}
	while(1){
		int y,x,t;
		int size=water.size();
		for(i=0;i<size;i++){
			y=water.front().first;
			x=water.front().second;
			water.pop();
			if(y+1<r && a[y+1][x]=='.'){
				a[y+1][x]='*';
				water.push(make_pair(y+1,x));
			}
			if(x+1<c && a[y][x+1]=='.'){
				a[y][x+1]='*';
				water.push(make_pair(y,x+1));
			}
			if(y-1>=0 && a[y-1][x]=='.'){
				a[y-1][x]='*';
				water.push(make_pair(y-1,x));
			}
			if(x-1>=0 && a[y][x-1]=='.'){
				a[y][x-1]='*';
				water.push(make_pair(y,x-1));
			}
		}
		size=animal.size();
		if(size==0){
			printf("KAKTUS");
			return 0;
		}
		for(i=0;i<size;i++){
			y=animal.front().first.first;
			x=animal.front().first.second;
			t=animal.front().second;
			animal.pop();
			a[y][x]='*';
			if(y+1<r && a[y+1][x]=='.'){
				a[y+1][x]='*';
				animal.push(make_pair(make_pair(y+1,x),t+1));
			}
			if(x+1<c && a[y][x+1]=='.'){
				a[y][x+1]='*';
				animal.push(make_pair(make_pair(y,x+1),t+1));
			}
			if(y-1>=0 && a[y-1][x]=='.'){
				a[y-1][x]='*';
				animal.push(make_pair(make_pair(y-1,x),t+1));
			}
			if(x-1>=0 && a[y][x-1]=='.'){
				a[y][x-1]='*';
				animal.push(make_pair(make_pair(y,x-1),t+1));
			}
			if(y+1<r && a[y+1][x]=='D'){
				printf("%d",t+1);
				return 0;
			}
			if(x+1<c && a[y][x+1]=='D'){
				printf("%d",t+1);
				return 0;
			}
			if(y-1>=0 && a[y-1][x]=='D'){
				printf("%d",t+1);
				return 0;
			}
			if(x-1>=0 && a[y][x-1]=='D'){
				printf("%d",t+1);
				return 0;
			}
		}
	}
}
