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
int a[50][50];
int b[50][50];
pair<int,int>top;
pair<int,int>bottom;
int main(){
	int r,c,t;
	scanf("%d%d%d",&r,&c,&t);
	int i,j,k;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
			if(a[i][j]==-1){
				if(top.first==0){
					top.first=i;
					top.second=j;
				}
				else{
					bottom.first=i;
					bottom.second=j;
				}
			}
		}
	}
	for(k=0;k<t;k++){
		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				int cnt=0;
				if(i-1>=0 && a[i-1][j]!=-1){
					b[i-1][j]+=a[i][j]/5;
					cnt++;
				}
				if(j-1>=0 && a[i][j-1]!=-1){
					b[i][j-1]+=a[i][j]/5;
					cnt++;
				}
				if(i+1<r && a[i+1][j]!=-1){
					b[i+1][j]+=a[i][j]/5;;
					cnt++;
				}
				if(j+1<c && a[i][j+1]!=-1){
					b[i][j+1]+=a[i][j]/5;
					cnt++;
				}
				b[i][j]+=a[i][j]-a[i][j]/5*cnt;
			}
		}
		memset(a,0,sizeof(a));
		for(i=top.first-1;i>0;i--){
			b[i][top.second]=b[i-1][top.second];
		}
		for(j=top.second;j<c-1;j++){
			b[i][j]=b[i][j+1];
		}
		for(i=i;i<top.first;i++){
			b[i][j]=b[i+1][j];
		}
		for(j=j;j>top.second+1;j--){
			b[i][j]=b[i][j-1];
		}
		b[i][j]=0;
		for(i=bottom.first+1;i<r-1;i++){
			b[i][bottom.second]=b[i+1][bottom.second];
		}
		for(j=bottom.second;j<c-1;j++){
			b[i][j]=b[i][j+1];
		}
		for(i=i;i>bottom.first;i--){
			b[i][j]=b[i-1][j];
		}
		for(j=j;j>bottom.second+1;j--){
			b[i][j]=b[i][j-1];
		}
		b[i][j]=0;
		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				a[i][j]=b[i][j];
			}
		}
		memset(b,0,sizeof(b));
	}
	int ans=0;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			ans+=a[i][j];
		}
	}
	printf("%d",ans+2);
}
