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
void bt(int cnt){
	int i,j;
	if(m==cnt){
		for(i=0;i<m;i++){
			printf("%d ",ans[i]);
		}
		printf("\n");
		return;
	}
	for(i=1;i<=n;i++){
		ans[cnt]=i;
		bt(cnt+1);
	}
}
int main(){
	scanf("%d%d",&n,&m);
	int i,j;
	bt(0);
}
