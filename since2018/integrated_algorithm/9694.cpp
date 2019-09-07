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
using namespace std;
typedef pair<int,int> pii;
stack<int>s;
pair<int,int> a[20][20];
void dq(int l,int r){
	if(a[l][r].second==INF){
		return;
	}
	dq(a[l][r].second,r);
	s.push(a[l][r].second);
	dq(l,a[l][r].second);
}
int main(){
	int tc;
	scanf("%d",&tc);
	for(int l=1;l<=tc;l++){
		int n,m;
		scanf("%d%d",&n,&m);
		int i,j,k;
		for(i=0;i<20;i++){
			for(j=0;j<20;j++){
				a[i][j].first=INF;
				a[i][j].second=INF;
			}
		}
		for(i=0;i<n;i++){
			int x,y,z;
			scanf("%d%d%d",&x,&y,&z);
			a[x][y].first=z;
			a[y][x].first=z;
		}
		for(i=0;i<m;i++){
			for(j=0;j<m;j++){
				for(k=0;k<m;k++){
					if(j!=k){
						if(a[j][k].first>a[j][i].first+a[i][k].first){
							a[j][k].first=a[j][i].first+a[i][k].first;
							a[j][k].second=i;
						}
					}
				}
			}
		}
		if(a[0][m-1].first==INF){
			printf("Case #%d: -1",l);
		}
		else{
			printf("Case #%d: ",l);
			s.push(m-1);
			dq(0,m-1);
			s.push(0);
			while(!s.empty()){
				printf("%d ",s.top());
				s.pop();
			}
		}
		printf("\n");
	}
}
