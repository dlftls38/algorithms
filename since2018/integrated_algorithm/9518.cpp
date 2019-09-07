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
int check[3000][3000];
int main(){
	int r,s;
	scanf("%d%d",&r,&s);
	int i,j;
	char a[50][51]={0};
	int b[54][54]={0};
	int val[54][54]={0};
	int cnt=0;
	for(i=0;i<r;i++){
		scanf("%s",a[i]);
	}
	for(i=0;i<r;i++){
		for(j=0;j<s;j++){
			val[i+1][j+1]=cnt++;
			if(a[i][j]=='o'){
				b[i+1][j+1]=1;
			}
		}
	}
	int y=53,x=53;
	int temp=0;
	for(i=1;i<=r;i++){
		for(j=1;j<=s;j++){
			if(b[i][j]==0){
				if(temp<b[i+1][j+1]+b[i+1][j]+b[i+1][j-1]+b[i][j-1]+b[i-1][j-1]+b[i-1][j]+b[i-1][j+1]+b[i][j+1]){
					temp=b[i+1][j+1]+b[i+1][j]+b[i+1][j-1]+b[i][j-1]+b[i-1][j-1]+b[i-1][j]+b[i-1][j+1]+b[i][j+1];
					y=i;
					x=j;
				}
			}
		}
	}
	b[y][x]=1;
	int ans=0;
	for(i=1;i<=r;i++){
		for(j=1;j<=s;j++){
			if(b[i][j]==1){
				if(b[i][j+1]==1 && check[val[i][j]][val[i][j+1]]==0){
					ans++;
					int from = val[i][j];
					int to = val[i][j+1];
					check[from][to]=1;
					check[to][from]=1;
				}
				if(b[i+1][j+1]==1 && check[val[i][j]][val[i+1][j+1]]==0){
					ans++;
					int from = val[i][j];
					int to = val[i+1][j+1];
					check[from][to]=1;
					check[to][from]=1;
				}
				if(b[i+1][j]==1 && check[val[i][j]][val[i+1][j]]==0){
					ans++;
					int from = val[i][j];
					int to = val[i+1][j];
					check[from][to]=1;
					check[to][from]=1;
				}
				if(b[i+1][j-1]==1 && check[val[i][j]][val[i+1][j-1]]==0){
					ans++;
					int from = val[i][j];
					int to = val[i+1][j-1];
					check[from][to]=1;
					check[to][from]=1;
				}
				if(b[i][j-1]==1 && check[val[i][j]][val[i][j-1]]==0){
					ans++;
					int from = val[i][j];
					int to = val[i][j-1];
					check[from][to]=1;
					check[to][from]=1;
				}
				if(b[i-1][j-1]==1 && check[val[i][j]][val[i-1][j-1]]==0){
					ans++;
					int from = val[i][j];
					int to = val[i-1][j-1];
					check[from][to]=1;
					check[to][from]=1;
				}
				if(b[i-1][j]==1 && check[val[i][j]][val[i-1][j]]==0){
					ans++;
					int from = val[i][j];
					int to = val[i-1][j];
					check[from][to]=1;
					check[to][from]=1;
				}
				if(b[i-1][j+1]==1 && check[val[i][j]][val[i-1][j+1]]==0){
					ans++;
					int from = val[i][j];
					int to = val[i-1][j+1];
					check[from][to]=1;
					check[to][from]=1;
				}
			}
		}
	}
	printf("%d",ans);
}
