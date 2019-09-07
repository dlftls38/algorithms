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
int main(){
	int n,l;
	scanf("%d%d",&n,&l);
	long long s=0;
	long long e=1;
	int ans_len=INT_MAX;
	int ans_s;
	int ans_e;
	while((e*e+e)/2<n){
		e++;
	}
	while(1){
		long long ee=(e*e+e)/2;
		long long ss=((s-1)*(s-1)+(s-1))/2;
		if(s==0){
			ss=0;
		}
		//printf("%d %d %d %d %d\n",s,e,e-s+1,l,ee-ss);
		if(e-s+1<l && ee-ss>n){
			break;
		}
		else if(e-s+1<l || ee-ss<n){
			e++;
		}
		else if(ee-ss>n){
			s++;
		}
		else if(ee-ss==n){
			if(ans_len>e-s+1){
				ans_len=e-s+1;
				ans_s=s;
				ans_e=e;
			}
			s++;
		}
	}
	if(ans_len!=INT_MAX && ans_len<=100){
		for(int i=ans_s;i<=ans_e;i++){
			printf("%d ",i);
		}
	}
	else{
		printf("-1");
	}
}
