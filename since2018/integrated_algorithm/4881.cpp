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
int main(){
	while(1){
		int a,b;
		scanf("%d%d",&a,&b);
		if(a==0 && b==0){
			break;
		}
		printf("%d %d ",a,b);
		map<int,int>mp;
		int cnt=1;
		while(mp[a]==0){
			mp[a]=cnt++;
			int temp=0;
			while(a>0){
				temp+=(a%10)*(a%10);
				a/=10;
			}
			a=temp;
		}
		cnt=1;
		map<int,int>mp2;
		int ans=INT_MAX;
		while(mp2[b]==0){
			if(mp[b]>0){
				ans=min(mp[b]+cnt,ans);
			}
			mp2[b]=cnt++;
			int temp=0;
			while(b>0){
				temp+=(b%10)*(b%10);
				b/=10;
			}
			b=temp;
		}
		if(ans==INT_MAX)
			printf("0\n");
		else
			printf("%d\n",ans);
	}
}
