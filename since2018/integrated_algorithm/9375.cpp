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
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int i,j;
		map<string,int>mp;
		for(i=0;i<n;i++){
			char temp[21];
			scanf("%s",temp);
			scanf("%s",temp);
			mp[temp]++;
		}
		int ans=1;
		for(auto it : mp){
			ans*=it.second+1;
		}
		printf("%d\n",ans-1);
	}
}
