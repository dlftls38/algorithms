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
	int dx[]={1,0,-1,1,-1,1,0,-1};
	int dy[]={1,1,1,0,0,-1,-1,-1};
	while(1){
		int r,c;
		scanf("%d%d",&r,&c);
		if(r==0)break;
		char a[123][123]={0};
		int i,j,k;
		for(i=0;i<r;i++){
			scanf("%s",a[i+1]+1);
		}
		for(i=1;i<=r;i++){
			for(j=1;j<=c;j++){
				if(a[i][j]=='.'){
					int cnt=0;
					for(k=0;k<8;k++){
						if(a[i+dy[k]][j+dx[k]]=='*')cnt++;
					}
					a[i][j]=cnt+'0';
				}
			}
		}
		for(i=1;i<=r;i++){
			for(j=1;j<=c;j++){
				printf("%c",a[i][j]);
			}
			printf("\n");
		}
	}
}
