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
	while(1){
		int n;
		scanf("%d",&n);
		if(n==-1)break;
		int i,j;
		int sum=0;
		vector<int>ans;
		for(i=1;i*i<n;i++){
			if(n%i==0){
				if(i<n){
					sum+=i;
					ans.push_back(i);
				}
				if(n/i<n){
					sum+=n/i;
					ans.push_back(n/i);
				}
			}
		}
		if(n%(i*i)==0){
			if(i<n){
				sum+=i;
				ans.push_back(i);
			}
		}
		sort(ans.begin(),ans.end());
		if(sum==n){
			printf("%d = %d ",n,ans[0]);
			for(i=1;i<ans.size();i++){
				printf("+ %d ",ans[i]);
			}
			printf("\n");
		}
		else{
			printf("%d is NOT perfect.\n",n);
		}
	}
}
