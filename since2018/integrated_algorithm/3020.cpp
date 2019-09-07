#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <limits.h>
#include <functional>
#include <math.h>
using namespace std;
int h1[500002];
int h2[500002];
int ans[500002];
int main(){
	int n,h;
	scanf("%d%d",&n,&h);
	int i,j;
	for(i=0;i<n;i++){
		int x;
		scanf("%d",&x);
		if(i%2==0){
			h1[x]++;
		}
		else{
			h2[x]++;
		}
	}
	int ans_val=INT_MAX;
	int ans_count=0;
	for(i=h;i>=1;i--){
		h1[i]+=h1[i+1];
		h2[i]+=h2[i+1];
	}
	for(i=1;i<=h;i++){
		ans[h1[i]+h2[h-i+1]]++;
	}
	for(i=1;i<=h;i++){
		if(h1[i]+h2[h-i+1]<ans_val){
			ans_count=ans[h1[i]+h2[h-i+1]];
			ans_val=h1[i]+h2[h-i+1];
		}
	}
	printf("%d %d",ans_val,ans_count);
}
