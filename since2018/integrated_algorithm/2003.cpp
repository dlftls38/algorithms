#include <stdio.h>
#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <limits.h>
#include <functional>
#include <math.h>
#include <fstream>
using namespace std;
int a[10000];
int main(){
	int n;
	long long m;
	scanf("%d%lld",&n,&m);
	int i,j;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int s=0;
	int e=0;
	long long sum=0;
	int ans=0;
	for(;s<n;){
		if(e==n || sum>=m){
			sum-=a[s++];
		}
		else{
			sum+=a[e++];
		}
		if(sum==m){
			ans++;
		}
	}
	printf("%d",ans);
}
