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
int max_len;
int pos(int y,int x){
	int line=max(abs(y),abs(x));
	int ans=((line+1)*2-1)*((line+1)*2-1);
	int ty=line;
	int tx=line;
	if(ty==y && tx==x){
		return ans;
	}
	for(int i=0;i<line*2;i++){
		if(ty==y && tx==x){
			return ans;
		}
		ans--;
		tx--;
	}
	for(int i=0;i<line*2;i++){
		if(ty==y && tx==x){
			return ans;
		}
		ans--;
		ty--;
	}
	for(int i=0;i<line*2;i++){
		if(ty==y && tx==x){
			return ans;
		}
		ans--;
		tx++;
	}
	for(int i=0;i<line*2-1;i++){
		if(ty==y && tx==x){
			return ans;
		}
		ans--;
		ty++;
	}
}
int len(int val){
	int ans=0;
	while(val>0){
		ans++;
		val/=10;
	}
	max_len=max(max_len,ans);
	return ans;
}
pair<int,int>matrix[50][5];
int main(){
	int r1,c1,r2,c2;
	scanf("%d%d%d%d",&r1,&c1,&r2,&c2);
	int i,j,k;
	for(i=r1;i<=r2;i++){
		for(j=c1;j<=c2;j++){
			int val=pos(i,j);
			matrix[i-r1][j-c1]={val,len(val)};
		}
	}
	for(i=0;i<r2-r1+1;i++){
		for(j=0;j<c2-c1+1;j++){
			for(k=0;k<max_len-matrix[i][j].second;k++){
				printf(" ");
			}
			printf("%d ",matrix[i][j].first);
		}
		printf("\n");
	}
}
