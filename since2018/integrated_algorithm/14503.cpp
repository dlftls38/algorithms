#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <limits.h>
#include <functional>
using namespace std;
int main(){
	int a[50][50];
	int n,m;
	scanf("%d%d",&n,&m);
	int r,c,d;
	scanf("%d%d%d",&r,&c,&d);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int count=0;
	int ans=0;
	int q=1;
	while(1){
		if(a[r][c]==0){
			ans++;
		}
		a[r][c]=2;
		int check=0;
		if(d==0){
			if(c-1>=0 && a[r][c-1]==0){
				d=3;
				c--;
				check=1;
				count=0;
			}
		}
		else if(d==1){
			if(r-1 >=0 && a[r-1][c]==0){
				d=0;
				r--;
				check=1;
				count=0;
			}
		}
		else if(d==2){
			if(c+1 < m && a[r][c+1]==0){
				d=1;
				c++;
				check=1;
				count=0;
			}
		}
		else{
			if(r+1<n && a[r+1][c]==0){
				d=2;
				r++;
				check=1;
				count=0;
			}
		}
		if(check==0){
			if(count==4){
				if(d==0 && r+1<n && a[r+1][c]!=1){
					r++;
				}
				else if(d==1 && c-1>=0 && a[r][c-1]!=1){
					c--;
				}
				else if(d==2 && r-1>=0 && a[r-1][c]!=1){
					r--;
				}
				else if(d==3 && c+1<m && a[r][c+1]!=1){
					c++;
				}
				else{
					break;
				}
				count=0;
			}
			else{
				if(d==0)
					d=3;
				else if(d==1)
					d=0;
				else if(d==2)
					d=1;
				else
					d=2;
				count++;
			}
		}
	}
	printf("%d",ans);
}
