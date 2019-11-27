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
pii dir[] = { {1,0},{-1,0},{0,1},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1} };
long long ans=1;
vector<long long>prime;
int size;
void bt(int cur_size, int cur_pos){
	if(cur_pos==cur_size){
		
	}
	int i;
	for(i=0;i<size;i++){
		
	}
}
int main(){
	long long n;
	cin>>n;
	int i,j;
	set<long long>s;
	long long nn=n;
	for(long long l=2;l*l<n;l++){
		if(nn%l==0){
			s.insert(l);
			while(nn%l==0){
				nn/=l;
			}
		}
	}
	if(nn!=1){
		s.insert(nn);
	}
	if(s.empty()){
		printf("%lld",n-1);
	}
	else{
		for(auto it : s){
			prime.push_back(it);
		}
		size=prime.size();
		for(i=1;i<=size;i++){
			bt(i,0);
		}
		printf("%lld",ans);
	}
}
