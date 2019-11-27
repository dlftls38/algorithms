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
	char a[50][51];
	int i,j;
	int ans1=0;
	for(i=0;i<n;i++){
		scanf("%s",a[i]);
		int cnt=0;
		for(j=0;j<m;j++){
			if(a[i][j]=='X'){
				cnt++;
			}
		}
		if(cnt==0)ans1++;
	}
	int ans2=0;
	for(i=0;i<m;i++){
		int cnt=0;
		for(j=0;j<n;j++){
			if(a[j][i]=='X'){
				cnt++;
			}
		}
		if(cnt==0)ans2++;
	}
	printf("%d",max(ans1,ans2));
}
