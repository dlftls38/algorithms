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
set<int> v[100001];
int check[100001];
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	int i,j;
	for(i=0;i<k;i++){
		int x,y;
		scanf("%d%d",&x,&y);
		if(y<x)swap(x,y);
		v[x].insert(y);
	}
	int ans=0;
	for(i=0;i<n;i++){
		int size=v[i].size();
		if(size>0){
			for(auto it : v[i]){
				if(check[it]==0 || check[i]==0 || check[it]!=check[i]){
					if(check[it]==0){
						check[it]=ans+1;
					}
					if(check[i]==0){
						check[i]=ans+1;
					}
					ans++;
				}
			}
		}
	}
	printf("%d",k-ans);
}
