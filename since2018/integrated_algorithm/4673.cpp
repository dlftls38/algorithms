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
using namespace std;
int ans[10001]={0};
void recur(int x, int nf){
	if(ans[x]==1 || x>10000){
		return;
	}
	if(nf==1)
		ans[x]=1;
	int next=x;
	while(x>0){
		next+=x%10;
		x/=10;
	}
	recur(next,1);
}
int main(){
	for(int i=1;i<=10000;i++){
		recur(i,0);
	}
	for(int i=1;i<=10000;i++){
		if(ans[i]==0)
		{
			printf("%d\n",i);
		}
	}
}
