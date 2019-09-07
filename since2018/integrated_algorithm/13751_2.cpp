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
set<int>s;
int sum1,sum2;
int b[14];
int p[14];
int check[14];
int b_cnt,p_cnt;
void solve2(int cur){
	int i;
	if(sum2>sum1)return;
	if(sum1==sum2){
		for(i=0;i<b_cnt;i++){
			s.insert(b[i]+sum1*2);
		}
		return;
	}
	for(i=cur;i<p_cnt;i++){
		if(check[i]==0){
			sum2+=p[i];
			solve2(i+1);
			sum2-=p[i];
		}
	}
}
void solve1(int cur){
	solve2(0);
	int i;
	for(i=cur;i<p_cnt;i++){
		sum1+=p[i];
		check[i]=1;
		solve1(i+1);
		check[i]=0;
		sum1-=p[i];
	}
}
int main(){
	scanf("%d%d",&b_cnt,&p_cnt);
	int i;
	for(i=0;i<b_cnt;i++){
		scanf("%d",&b[i]);
	}
	for(i=0;i<p_cnt;i++){
		scanf("%d",&p[i]);
	}
	sort(p,p+p_cnt);
	solve1(0);
	for(auto it : s){
		printf("%d\n",it);
	}
}
