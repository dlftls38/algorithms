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
int main(){
	long long mn,mx;
	scanf("%lld%lld",&mn,&mx);
	long long i,j;
	map<long long,int>mp;
	for(i=mn;i<=mx;i++){
		mp[i]=1;
	}
	int ans=mx-mn+1;
	for(i=2;i*i<=mx;i++){
		long long temp=i*i;
		if(mn%temp>0){
			temp*=(mn/temp)+1;
		}
		else{
			temp*=mn/temp;
		}
		while(mn<=temp && temp<=mx){
			mp[temp]=2;
			temp+=i*i;
		}
	}
	for(i=mn;i<=mx;i++){
		if(mp[i]==2){
			ans--;
		}
	}
	printf("%d",ans);
}
