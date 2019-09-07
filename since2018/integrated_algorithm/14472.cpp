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
	int n,m,d;
	scanf("%d%d%d",&n,&m,&d);
	int i,j,k;
	char a[100][101]={0};
	for(i=0;i<n;i++){
		scanf("%s",a[i]);
	}
	int ans=0;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			int temp=0;
			for(k=j;k<d+j;k++){
				if(a[i][k]=='.')temp++;
			}
			if(temp==d)ans++;
			temp=0;
			for(k=i;k<d+i;k++){
				if(a[k][j]=='.')temp++;
			}
			if(temp==d)ans++;
		}
	}
	printf("%d",ans);
}
