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
int room[1001][1001];
int main(){
	int n,a,b;
	scanf("%d%d%d",&n,&a,&b);
	int i,j;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			scanf("%d",&room[i][j]);
		}
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(i==a || j==b){
				if(room[i][j]>room[a][b]){
					printf("ANGRY");
					return 0;
				}
			}
		}
	}
	printf("HAPPY");
}
