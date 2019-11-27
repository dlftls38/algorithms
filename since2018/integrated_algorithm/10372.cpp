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
#define pi 3.141592
using namespace std;
typedef pair<int,int> pii;
int a[]={6,2,5,5,4,5,6,3,7,6};
void solve(int pos,int segment,string ans){
	if(pos==4 && segment==0){
		printf("%s",ans.c_str());
		exit(0);
	}
	int i,j;
	if(pos==0){
		int limit=2;
		for(i=0;i<=limit;i++){
			if(segment>=a[i]){
				char temp=i+48;
				solve(pos+1,segment-a[i],ans+temp);
			}
		}
	}
	else if(pos==1){
		int limit;
		if(ans.compare("2")==0){
			limit=3;
		}
		else{
			limit=9;
		}
		for(i=0;i<=limit;i++){
			if(segment>=a[i]){
				char temp=i+48;
				solve(pos+1,segment-a[i],ans+temp);
			}
		}
	}
	else if(pos==2){
		ans+=":";
		int limit=5;
		for(i=0;i<=limit;i++){
			if(segment>=a[i]){
				char temp=i+48;
				solve(pos+1,segment-a[i],ans+temp);
			}
		}
	}
	else if(pos==3){
		int limit=9;
		for(i=0;i<=limit;i++){
			if(segment>=a[i]){
				char temp=i+48;
				solve(pos+1,segment-a[i],ans+temp);
			}
		}
	}
}
int main(){
	int n;
	scanf("%d",&n);
	solve(0,n,"");
	printf("Impossible");
}
