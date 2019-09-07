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
int a[8];
int check[9];
void dfs(int pos){
	int i,j;
	if(pos==m){
		for(i=0;i<m;i++){
			printf("%d ",a[i]);
		}
		printf("\n");
		return;
	}
	for(i=1;i<=n;i++){
		if(check[i]==0){
			check[i]=1;
			a[pos]=i;
			dfs(pos+1);
			check[i]=0;
		}
	}
}
int main(){
	scanf("%d%d",&n,&m);
	dfs(0);
}
