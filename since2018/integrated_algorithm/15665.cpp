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
set<int>origin;
int origin2[8]={0};
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
		ans[cnt]=origin2[i];
		bt(cnt+1);
	}
}
int main(){
	scanf("%d%d",&n,&m);
	int i,j;
	for(i=0;i<n;i++){
		int temp;
		scanf("%d",&temp);
		origin.insert(temp);
	}
	n=0;
	for(int it : origin){
		origin2[n++]=it;
	}
	bt(0);
}
