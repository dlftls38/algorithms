#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
int main(){
	int n,m,r;
	scanf("%d%d%d",&n,&m,&r);
	int i;
	int min=1000000;
	for(i=0;i<n;i++){
		int x;
		scanf("%d",&x);
		if(min>x){
			min=x;
		}
	}
	int max=0;
	for(i=0;i<m;i++){
		int x;
		scanf("%d",&x);
		if(max<x){
			max=x;
		}
	}
	if(min<max){
		int shares=r/min;
		r%=min;
		r+=shares*max;
	}
	printf("%d",r);
}