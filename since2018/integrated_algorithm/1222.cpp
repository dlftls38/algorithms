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
int a[2000001];
int main(){
	int n;
	scanf("%d",&n);
	map<int,int>team;
	int i,j;
	for(i=0;i<n;i++){
		int x;
		scanf("%d",&x);
		team[x]++;
	}
	for(auto it : team){
		int number=it.first;
		int number_size=it.second;
		for(i=1;i*i<number;i++){
			if(number%i==0){
				a[i]+=number_size;
				a[number/i]+=number_size;
			}
		}
		if(number%(i*i)==0){
			a[i]+=number_size;
		}
	}
	long long ans=0;
	for(i=1;i<=2000000;i++){
		if(a[i]>1){
			ans=max(ans,1LL*a[i]*i);
		}
	}
	printf("%lld",ans);
}
