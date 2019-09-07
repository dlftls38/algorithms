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
using namespace std;
typedef pair<int,int> pii;
int ans1,ans2;
char a[101][101];
int check1[100][100];
int check2[100][100];
int n;
void solve(int y,int x){
	int i,j;
	int cnt1=0;
	for(i=y;i<n;i++){
		if(check1[i][x]==0 && a[i][x]=='.'){
			check1[i][x]=1;
			cnt1++;
		}
		else break;
	}
	int cnt2=0;
	for(i=x;i<n;i++){
		if(check2[y][i]==0 && a[y][i]=='.'){
			check2[y][i]=1;
			cnt2++;
		}
		else break;
	}
	if(cnt1>=2){
		ans1++;
	}
	if(cnt2>=2){
		ans2++;
	}
}
int main(){
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++){
		scanf("%s",a[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(check1[i][j]==0 && a[i][j]=='.'){
				solve(i,j);
			}
			if(check2[i][j]==0 && a[i][j]=='.'){
				solve(i,j);
			}
		}
	}
	printf("%d %d",ans2,ans1);
}
