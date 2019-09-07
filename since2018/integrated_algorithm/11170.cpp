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
		int ans=0;
		for(int i=n;i<=m;i++){
			int cnt=0;
			int temp=i;
			while(1){
				if(temp%10==0){
					cnt++;
				}
				temp/=10;
				if(temp==0){
					break;
				}
			}
			ans+=cnt;
		}
		printf("%d\n",ans);
	}
}
