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
int a[10001];
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int i,j;
	int ans=1;
	for(i=0;i<m;i++){
		int x;
		scanf("%d",&x);
		memset(a,0,sizeof(a));
		int check=0;
		for(j=0;j<x;j++){
			int temp;
			scanf("%d",&temp);
			if(temp<0){
				if(a[-temp]==1){
					check=1;
				}
				a[-temp]=1;
			}
			else{
				if(a[temp]==1){
					check=1;
				}
				a[temp]=1;
			}
		}
		if(check==0){
			ans=0;
		}
	}
	if(ans==1){
		printf("NO");
	}
	else{
		printf("YES");
	}
}
