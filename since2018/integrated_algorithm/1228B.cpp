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
#define MOD 1000000007
#define pi 3.141592
using namespace std;
typedef pair<int,int> pii;
pii dir[] = { {1,0},{-1,0},{0,1},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1} };
int board[1212][1212];
int main(){
	int h,w;
	cin>>h>>w;
	int i,j;
	for(i=0;i<h;i++){
		for(j=0;j<w;j++){
			board[i][j]=-1;
		}
	}
	for(i=0;i<h;i++){
		int r;
		cin>>r;
		for(j=0;j<r;j++){
			board[i][j]=1;
		}
		board[i][j]=0;
	}
	for(i=0;i<w;i++){
		int c;
		cin>>c;
		for(j=0;j<c;j++){
			if(board[j][i]==0){
				printf("0");
				return 0;
			}
			board[j][i]=1;
		}
		if(board[j][i]==1){
			printf("0");
			return 0;
		}
		board[j][i]=0;
	}
	long long ans=1;
	long long cnt=0;
	for(i=0;i<h;i++){
		for(j=0;j<w;j++){
			if(board[i][j]==-1){
				cnt++;
			}
		}
	}
	for(i=0;i<cnt;i++){
		ans*=2;
		ans%=MOD;
	}
	printf("%lld",ans);
}
