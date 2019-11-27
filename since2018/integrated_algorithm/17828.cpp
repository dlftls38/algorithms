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
char ans[5000010];
int main(){
	int n,x;
	cin>>n>>x;
	int i,j;
	for(i=0;i<n;i++){
		ans[i]='A';
	}
	int cost = n;
	for(i=n-1;i>=0;i--){
		if(cost<x){
			if(x-cost>25){
				cost+=25;
				ans[i]='Z';
			}
			else{
				ans[i]+=x-cost;
				cost+=x-cost;
			}
		}
		else{
			break;
		}
	}
	if(x==cost){
		printf("%s",ans);
	}
	else{
		printf("!");
	}
}
