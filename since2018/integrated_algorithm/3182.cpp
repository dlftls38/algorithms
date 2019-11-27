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
#define MAX_SIZE 1000001
using namespace std;
int link[1001];
int check[1001];
int ans;
int ans_pos;
int start;
void dfs(int cur,int cnt){
	if(cnt>ans){
		ans=cnt;
		ans_pos=start;
	}
	if(check[link[cur]]==0){
		check[link[cur]]=1;
		dfs(link[cur],cnt+1);
	}
}
int main(){
	int i,j;
    int n;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        int s;
        scanf("%d", &s);
        link[i]=s;
    }
    for(i=1;i<=n;i++){
    	start=i;
    	memset(check,0,sizeof(check));
    	check[i]=1;
    	dfs(i,1);
	}
	printf("%d",ans_pos);
}
