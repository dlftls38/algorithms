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
char a[1001][1001];
int check[1001][1001];
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	int i,j;
	for(i=0;i<m;i++){
		scanf("%s",a[i]);
	}
	for(i=0;i<n;i++){
		if(a[0][i]=='0' && check[0][i]==0){
			queue<pair<int,int> >q;
			q.push({0,i});
			check[0][i]=1;
			while(!q.empty()){
				int y=q.front().first;
				int x=q.front().second;
				q.pop();
				if(y==m-1){
					printf("YES");
					return 0;
				}
				if(y+1<m && a[y+1][x]=='0' && check[y+1][x]==0){
					check[y+1][x]=1;
					q.push({y+1,x});
				}
				if(x+1<n && a[y][x+1]=='0' && check[y][x+1]==0){
					check[y][x+1]=1;
					q.push({y,x+1});
				}
				if(y-1>=0 && a[y-1][x]=='0' && check[y-1][x]==0){
					check[y-1][x]=1;
					q.push({y-1,x});
				}
				if(x-1>=0 && a[y][x-1]=='0' && check[y][x-1]==0){
					check[y][x-1]=1;
					q.push({y,x-1});
				}
			}
		}
	}
	printf("NO");
}
