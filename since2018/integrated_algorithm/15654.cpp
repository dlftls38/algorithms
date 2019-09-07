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
int n,m;
int ans[8]={0};
int origin[8]={0};
int check[10001]={0};
void bt(int cnt){
	int i,j;
	if(m==cnt){
		for(i=0;i<m;i++){
			printf("%d ",ans[i]);
		}
		printf("\n");
		return;
	}
	for(i=0;i<n;i++){
		if(check[origin[i]]==0){
			ans[cnt]=origin[i];
			check[origin[i]]=1;
			bt(cnt+1);
			check[origin[i]]=0;
		}
	}
}
int main(){
	scanf("%d%d",&n,&m);
	int i,j;
	for(i=0;i<n;i++){
		scanf("%d",&origin[i]);
	}
	sort(origin,origin+n);
	bt(0);
}
