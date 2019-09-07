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
	int tc;
	scanf("%d",&tc);
	while(tc--){
		int n,m;
		scanf("%d%d",&n,&m);
		int i,j;
		int candidates[6]={0};
		for(i=0;i<m;i++){
			for(j=1;j<=n;j++){
				int temp;
				scanf("%d",&temp);
				candidates[j]+=temp;
			}
		}
		int winner;
		int max_vote=0;
		for(i=1;i<=n;i++){
			if(max_vote<candidates[i]){
				max_vote=candidates[i];
				winner=i;
			}
		}
		printf("%d\n",winner);
	}
}
