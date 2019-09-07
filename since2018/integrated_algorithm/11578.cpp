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
	int n,m;
	scanf("%d%d",&n,&m);
	int i,j,k;
	vector<int>v[10];
	int ans=INF;
	for(i=0;i<m;i++){
		int o;
		scanf("%d",&o);
		for(j=0;j<o;j++){
			int p;
			scanf("%d",&p);
			v[i].push_back(p);
		}
	}
	for(i=0;i<(1<<m);i++){
		int temp[11]={0};
		int pos=1;
		int num=0;
		for(j=0;j<m;j++){
			if(i&pos){
				num++;
				int len=v[j].size();
				for(k=0;k<len;k++){
					temp[v[j][k]]=1;
				}
			}
			pos<<=1;
		}
		int cnt=0;
		for(k=1;k<=n;k++){
			if(temp[k])cnt++;
		}
		if(cnt==n){
			ans = min(ans,num);
		}
	}
	printf("%d",ans==INF?-1:ans);
}
