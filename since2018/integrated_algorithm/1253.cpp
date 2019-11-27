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
	int a[2000];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	int ans=0;
	for(i=0;i<n;i++){
		int s=0;
		int e=n-1;
		int sum=a[s]+a[e];
		while(1){
			if(s==i){
				sum-=a[s];
				s++;
				sum+=a[s];
				continue;
			}
			if(e==i){
				sum-=a[e];
				e--;
				sum+=a[e];
				continue;
			}
			if(e==s){
				break;
			}
			if(sum==a[i]){
				ans++;
				break;
			}
			if(e==0 || sum<a[i]){
				sum-=a[s];
				s++;
				sum+=a[s];
			}
			else{
				sum-=a[e];
				e--;
				sum+=a[e];
			}
		}
	}
	printf("%d",ans);
}
