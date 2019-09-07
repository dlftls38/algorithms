#include <stdio.h>
#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <limits.h>
#include <functional>
#include <math.h>
#include <fstream>
using namespace std;
int ans=100000;
void dfs(int a,int b,int x,int y,int c){
	//printf("%d %d %d %d\n",a,b,x,y);
	if(x<=0){
		ans=min(ans,c);
	}
	else if(a<=0){
		
	}
	else{
		dfs(a-y*3,b*(1.2),x,y,c+1);
		dfs(a*(1.1),b,x-y,y,c+1);
		dfs(a,b,x-b,y,c+1);	
	}
}
int main(){
	int a,b,x,y;
	scanf("%d%d%d%d",&a,&b,&x,&y);
	dfs(a,b,x,y,0);
	printf("%d",ans);
}
