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
int main(){
	int n;
	scanf("%d",&n);
	int board[64][64];
	int check[64][64]={0};
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&board[i][j]);
		}
	}
	queue<pair<int,int> >q;
	q.push({0,0});
	while(!q.empty()){
		int y=q.front().first;
		int x=q.front().second;
		int val=board[y][x];
		q.pop();
		if(y==n-1 && x==n-1){
			printf("HaruHaru");
			return 0;
		}
		if(y+val<n && check[y+val][x]==0){
			check[y+val][x]=1;
			q.push({y+val,x});
		}
		if(x+val<n && check[y][x+val]==0){
			check[y][x+val]=1;
			q.push({y,x+val});
		}
	}
	printf("Hing");
}
