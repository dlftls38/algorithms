#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
int main(){
	int n,h,m;
	scanf("%d%d%d",&n,&h,&m);
	int i,j;
	int height[100]={0};
	for(i=1;i<n+1;i++){
		height[i]=h;
	}
	for(i=0;i<m;i++){
		int l,r,x;
		scanf("%d%d%d",&l,&r,&x);
		for(j=l;j<r+1;j++){
			if(height[j]>x){
				height[j]=x;
			}
		}
	}
	int profit=0;
	for(i=1;i<n+1;i++){
		profit+=height[i]*height[i];
	}
	printf("%d",profit);
}