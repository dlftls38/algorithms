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
	int n,m;
	scanf("%d%d",&n,&m);
	int i,j;
	int ans=0;
	int cur=0;
	if(n>0){
		ans=1;
	}
	for(i=0;i<n;i++){
		int temp;
		scanf("%d",&temp);
		if(cur+temp>m){
			ans++;
			cur=temp;
		}
		else{
			cur+=temp;
		}
	}
	printf("%d",ans);
}
