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
vector<int> v[100001];
int check[100001];
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	int i,j;
	int s;
	for(i=0;i<k;i++){
		int x,y;
		scanf("%d%d",&x,&y);
		v[x].push_back(y);
		v[y].push_back(x);
		s=x;
	}
	for(i=1;i<=n;i++){
		int size=v[i].size();
		if(size>0 && check[i]==0){
			queue<int>q;
			q.push(i);
			check[i]=1;
			while(!q.empty()){
				int cur=q.front();
				q.pop();
				size=v[cur].size();
				for(j=0;j<size;j++){
					if(check[v[cur][j]]==0){
						check[v[cur][j]]=1;
						q.push(v[cur][j]);
						k--;
					}
				}
			}
		}
	}
	printf("%d",k);
}
