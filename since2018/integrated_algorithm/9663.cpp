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
int ans,n;
int qy[15];
int qx[15];
int tail;
void dfs(int y){
	int j,k,check;
	for(j=0;j<n;j++){
		check=1;
		for(k=0;k<tail;k++){
			if(qx[k]==j || abs(qy[k]-y)==abs(qx[k]-j)){
				check=0;
				break;
			}
		}
		if(check==1){
			qy[tail]=y;
			qx[tail++]=j;
			if(tail==n)
				ans++;
			if(tail!=n || y!=n-1)
				dfs(y+1);
			tail--;
		}
	}
}
int main(){
	scanf("%d",&n);
	int i,j;
	dfs(0);
	printf("%d",ans);
}
