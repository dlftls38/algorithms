#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <limits.h>
#include <functional>
#include <math.h>
using namespace std;
int main(){
	int k;
	scanf("%d",&k);
	int i,j;
	stack<int>s;
	for(i=1;i<=k;i++){
		int x;
		scanf("%d",&x);
		if(x==0){
			s.pop();
		}
		else{
			s.push(x);
		}
	}
	long long ans=0;
	while(!s.empty()){
		ans+=s.top();
		s.pop();
	}
	printf("%lld",ans);
}
