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
	int n;
	scanf("%d",&n);
	int i,j;
	char a[1000][4]={0};
	for(i=0;i<n-2;i++){
		scanf("%s",a[i]);
	}
	int ans=INF;
	for(i=0;i<4;i++){
		int temp=0;
		for(j=0;j<n-2;j++){
			int dist=abs(find(a[j],a[j]+4,'0')-a[j] - i);
			temp+=dist==3?1:dist;
		}
		ans=min(ans,temp);
	}
	printf("%d",3+n-1+ans);
}
