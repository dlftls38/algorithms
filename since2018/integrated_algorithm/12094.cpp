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
#define INF 987654321
#define MAX_VALUE 1000000000
using namespace std;
typedef pair<int,int> pii;
int n;
int a[20][20];
int ans;
int p[30];
int check[20][20];
stack<pii>s;
int sum=0;
void recur(int cnt){
	int i,j,k;
//	printf("\n");
//	for(i=0;i<n;i++){
//		for(j=0;j<n;j++){
//			printf("%d ",a[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");
	if(cnt==10){
		return;
	}
	int temp[20][20]={0};
	memcpy(temp,a,sizeof(temp));
	while(!s.empty()){
		check[s.top().first][s.top().second]=0;
		s.pop();
	}
	int mx=0;
	int ismoved=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[i][j]!=0){
				int y=i,x=j,val=a[i][j];
				a[i][j]=0;
				for(k=j-1;k>=0;k--){
					if(a[i][k]!=0){
						if(check[i][k]==1 || a[i][k]!=val){
							break;
						}
						else{
							ismoved=1;
							x=k;
							check[i][k]=1;
							s.push({i,k});
							val*=2;
							break;
						}
					}
					else{
						ismoved=1;
						x=k;
					}
				}
				a[y][x]=val;
				mx=max(mx,val);
			}
		}
	}
	while(!s.empty()){
		check[s.top().first][s.top().second]=0;
		s.pop();
	}
	ans=max(ans,mx);
	if(ismoved==1 && ans<=p[10-cnt-1]*mx && ans*2<=sum)
		recur(cnt+1);
	memcpy(a,temp,sizeof(temp));
	mx=0;
	ismoved=0;
	for(i=0;i<n;i++){
		for(j=n-1;j>=0;j--){
			if(a[i][j]!=0){
				int y=i,x=j,val=a[i][j];
				a[i][j]=0;
				for(k=j+1;k<n;k++){
					if(a[i][k]!=0){
						if(check[i][k]==1 || a[i][k]!=val){
							break;
						}
						else{
							ismoved=1;
							x=k;
							check[i][k]=1;
							s.push({i,k});
							val*=2;
							break;
						}
					}
					else{
						ismoved=1;
						x=k;
					}
				}
				a[y][x]=val;
				mx=max(mx,val);
			}
		}
	}
	while(!s.empty()){
		check[s.top().first][s.top().second]=0;
		s.pop();
	}
	ans=max(ans,mx);
	if(ismoved==1 && ans<=p[10-cnt-1]*mx && ans*2<=sum)
		recur(cnt+1);
	memcpy(a,temp,sizeof(temp));
	mx=0;
	ismoved=0;
	for(i=0;i<n;i++){
		for(j=n-1;j>=0;j--){
			if(a[j][i]!=0){
				int y=j,x=i,val=a[j][i];
				a[j][i]=0;
				for(k=j+1;k<n;k++){
					if(a[k][i]!=0){
						if(check[k][i]==1 || a[k][i]!=val){
							break;
						}
						else{
							ismoved=1;
							y=k;
							check[k][i]=1;
							s.push({k,i});
							val*=2;
							break;
						}
					}
					else{
						ismoved=1;
						y=k;
					}
				}
				a[y][x]=val;
				mx=max(mx,val);
			}
		}
	}
	while(!s.empty()){
		check[s.top().first][s.top().second]=0;
		s.pop();
	}
	ans=max(ans,mx);
	if(ismoved==1 && ans<=p[10-cnt-1]*mx && ans*2<=sum)
		recur(cnt+1);
	memcpy(a,temp,sizeof(temp));
	mx=0;
	ismoved=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[j][i]!=0){
				int y=j,x=i,val=a[j][i];
				a[j][i]=0;
				for(k=j-1;k>=0;k--){
					if(a[k][i]!=0){
						if(check[k][i]==1 || a[k][i]!=val){
							break;
						}
						else{
							ismoved=1;
							y=k;
							check[k][i]=1;
							s.push({k,i});
							val*=2;
							break;
						}
					}
					else{
						ismoved=1;
						y=k;
					}
				}
				a[y][x]=val;
				mx=max(mx,val);
			}
		}
	}
	while(!s.empty()){
		check[s.top().first][s.top().second]=0;
		s.pop();
	}
	ans=max(ans,mx);
	if(ismoved==1 && ans<=p[10-cnt-1]*mx && ans*2<=sum)
		recur(cnt+1);
	memcpy(a,temp,sizeof(temp));
	while(!s.empty()){
		check[s.top().first][s.top().second]=0;
		s.pop();
	}
}
int main(){
	scanf("%d",&n);
	int i,j;
	int t=1;
	for(i=0;i<30;i++){
		p[i]=t;
		t*=2;
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
			sum+=a[i][j];
		}
	}
	recur(0);
	printf("%d",ans);
}
