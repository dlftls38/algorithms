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
int q[100001];
int tail;
int main(){
	long long k=1;
	for(int i=0;i<32;i++){
		k*=2;
	}
	k--;
	int l;
	scanf("%d",&l);
	int i,j;
	long long ans=0;
	long long count=1;
	int over=0;
	int prevent=0;
	int prevent_point;
	for(i=0;i<l;i++){
		char s[1000]={0};
		scanf("%s",s);
		if(strcmp(s,"for")==0){
			long long x;
			scanf("%lld",&x);
			q[tail++]=x;
			if(prevent==0)
				count*=x;
			if(count>k && prevent==0){
				prevent=1;
				prevent_point=tail;
			}
		}
		else if(strcmp(s,"add")==0){
			ans+=count;
			if(ans>k || prevent==1){
				over=1;
			}
		}
		else{
			tail--;
			if(prevent==1 && prevent_point>tail){
				prevent=0;
			}
			if(prevent==0)
				count/=q[tail];
		}
	}
	if(over==1){
		printf("OVERFLOW!!!");
	}
	else{
		printf("%lld",ans);
	}
}
