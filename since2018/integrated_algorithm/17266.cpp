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
int a[100000];
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int i,j;
	for(i=0;i<m;i++){
		scanf("%d",&a[i]);
	}
	int l=0;
	int r=100000;
	int ans=n-a[m-1];
	while(l<=r){
		int mid=(l+r)/2;
		int end=0;
		int check=0;
		for(i=0;i<m;i++){
			if(a[i]-end<=mid){
				end=a[i]+mid;
			}
			else{
				check=1;
				break;
			}
		}
		if(check==0 && n-a[m-1]<=mid){
			ans = mid;
			r = mid-1;
		}
		else{
			l = mid+1;
		}
	}
	printf("%d",ans);
}
