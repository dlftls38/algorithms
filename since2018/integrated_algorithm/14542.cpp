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
	for(int cnt=1;;cnt++){
		int n;
		scanf("%d",&n);
		if(n==0)break;
		int ans=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<=i;j++){
				int temp;
				scanf("%d",&temp);
				if(j==0 || i==n-1 || i==j){
					ans+=temp;
				}
			}
		}
		printf("Case #%d:%d\n",cnt,ans);
	}
}
