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
int main(){
	int s1,s2,s3;
	scanf("%d%d%d",&s1,&s2,&s3);
	int i,j,k;
	map<int,int>mp;
	for(i=1;i<=s1;i++){
		for(j=1;j<=s2;j++){
			for(k=1;k<=s3;k++){
				mp[i+j+k]++;
			}
		}
	}
	int ans=INF;
	int cnt=0;
	for(auto it : mp){
		if(it.second>cnt){
			cnt=it.second;
			ans=it.first;
		}
	}
	printf("%d",ans);
}
