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
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	int i,j;
	map<int,int>m;
	for(i=0;i<10000;i++){
		m[b+a*i]=1;
	}
	int ans=0;
	int res;
	for(i=0;i<10000;i++){
		if(m[d+c*i]==1){
			ans=1;
			res=d+c*i;
			break;
		}
	}
	if(ans==0){
		printf("-1");
	}
	else{
		printf("%d",res);
	}
}
