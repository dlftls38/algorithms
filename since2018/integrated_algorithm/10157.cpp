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
int a[1002][1002]={0};
int ans_y,ans_x;
int c,r,k;
void recur(int y,int x,int d,int cnt){
	if(ans_y>0){
		return;
	}
	if(d==0){
		while(1){
			if(cnt==k){
				ans_y=y;
				ans_x=x;
			}
			a[y][x]=1;
			cnt++;
			if(a[y+1][x]==0){
				y++;
			}
			else{
				x++;
				d=1;
				break;
			}
		}
		
	}
	else if(d==1){
		while(1){
			if(cnt==k){
				ans_y=y;
				ans_x=x;
			}
			a[y][x]=1;
			cnt++;
			if(a[y][x+1]==0){
				x++;
			}
			else{
				y--;
				d=2;
				break;
			}
		}
	}
	else if(d==2){
		while(1){
			if(cnt==k){
				ans_y=y;
				ans_x=x;
			}
			a[y][x]=1;
			cnt++;
			if(a[y-1][x]==0){
				y--;
			}
			else{
				x--;
				d=3;
				break;
			}
		}
	}
	else if(d==3){
		while(1){
			if(cnt==k){
				ans_y=y;
				ans_x=x;
			}
			a[y][x]=1;
			cnt++;
			if(a[y][x-1]==0){
				x--;
			}
			else{
				y++;
				d=0;
				break;
			}
		}
	}
	recur(y,x,d,cnt);
}
int main(){
	scanf("%d%d%d",&c,&r,&k);
	if(k>c*r){
		printf("0");
		return 0;
	}
	int i,j;
	for(i=0;i<=c+1;i++){
		a[0][i]=1;
		a[r+1][i]=1;
	}
	for(i=0;i<=r+1;i++){
		a[i][0]=1;
		a[i][c+1]=1;
	}
	recur(1,1,0,1);
	printf("%d %d",ans_x,ans_y);
}
