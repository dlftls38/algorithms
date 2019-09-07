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
#define MOD 1000000009
using namespace std;
typedef pair<int,int> pii;
map<pair<int,int>,pair<string,int> >mp;
pair<string,int> solve(int n,int m){
	if(m==0 || n==m){
		return {"1",1};
	}
	if(m==1){
		char str[10]={0};
		sprintf(str,"%d",n);
		return {str,1};
	}
	pair<string,int> &k=mp[{n,m}];
	if(k.second>0){
		return k;
	}
	int i;
	pair<string,int> t1 = solve(n-1,m);
	pair<string,int> t2 = solve(n-1,m-1);
	string temp1=t1.first;
	string temp2=t2.first;
	int temp11[100]={0};
	int temp22[100]={0};
	int len1=temp1.length();
	int len2=temp2.length();
	int l;
	//printf("%s->",temp1.c_str());
	for(i=len1-1,l=0;i>=0;i--,l++){
		temp11[l]=temp1[i]-48;
		//printf("%d",temp11[l]);
	}
	//printf("  ");
	//printf("%s->",temp2.c_str());
	for(i=len2-1,l=0;i>=0;i--,l++){
		temp22[l]=temp2[i]-48;
		//printf("%d",temp22[l]);
	}
	//printf("   ");
	int sum[100]={0};
	int len3=max(len1,len2);
	for(i=0;i<max(len1,len2);i++){
		sum[i]+=temp11[i]+temp22[i];
		if(sum[i]>=10){
			sum[i]-=10;
			sum[i+1]++;
			if(i==len3-1){
				len3++;
			}
		}
		//printf("%d",sum[i]);
	}
	//printf("\n");
	for(i=len3-1;i>=0;i--){
		k.first+=sum[i]+48;
	}
	k.second=1;
	return k;
}
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	printf("%s",solve(n,m).first.c_str());
}
