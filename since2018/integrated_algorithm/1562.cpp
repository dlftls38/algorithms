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
using namespace std;
int dp[100][10][1<<10];
int n;
int recur(int pos,int val,int check){
	if(val<0 || val>9){
		return 0;
	}
	if(pos==n-1){
		if((check|(1<<val))==(1<<10)-1){
			return 1;
		}
		else{
			return 0;
		}
	}
	int &ret=dp[pos][val][check];
	if(ret!=-1){
		return ret;
	}
	check |= (1<<val);
	return ret = (recur(pos+1,val-1,check)+recur(pos+1,val+1,check))%1000000000;
}
int main(){
	scanf("%d",&n);
	int i,j;
	int ans=0;
	memset(dp,-1,sizeof(dp));
	for(i=1;i<10;i++){
		ans=(ans+recur(0,i,0))%1000000000;
	}
	printf("%d",ans);
}
