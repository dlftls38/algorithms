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
void bt(int pos,int cnt){
	int i,j;
	if(m==cnt){
		for(i=0;i<m;i++){
			printf("%d ",ans[i]);
		}
		printf("\n");
		return;
	}
	for(i=pos;i<n;i++){
		ans[cnt]=origin[i];
		bt(i+1,cnt+1);
	}
}
int main(){
	scanf("%d%d",&n,&m);
	int i,j;
	for(i=0;i<n;i++){
		scanf("%d",&origin[i]);
	}
	sort(origin,origin+n);
	bt(0,0);
}
