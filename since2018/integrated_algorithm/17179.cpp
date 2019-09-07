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
	int n,m,sum;
	scanf("%d%d%d",&n,&m,&sum);
	int i,j;
	int a[1001]={0};
	for(i=0;i<m;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		int cut;
		scanf("%d",&cut);
		int l=1;
		int r=4000000;
		int ans;
		while(l<=r){
			int mid=(l+r)/2;
			int cnt=0;
			int last=0;
			for(j=0;j<m;j++){
				if(a[j]-last>=mid && sum-a[j]>=mid){
					cnt++;
					last=a[j];
				}
			}
			//printf("%d %d\n",mid,cnt);
			if(cnt>=cut){
				l=mid+1;
				ans=mid;
			}
			else{
				r=mid-1;
			}
		}
		printf("%d\n",ans);
	}
}
/*
3 3 65
20
40
60
1
2
3
*/
