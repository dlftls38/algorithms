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
	int n;
	scanf("%d",&n);
	int i,j;
	int a[8];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int round=1;
	for(i=2;i<=n;i++){
		round*=i;
	}
	int ans=0;
	for(i=0;i<round;i++){
		int s=0;
		int e=0;
		int sum=a[0];
		int cnt=0;
		set<pair<int,int>>st;
		while(s<n){
			if(sum==50){
				if(st.find({s,e})==st.end()){
					cnt++;
					st.insert({s,e});
					int tmp1=e+1;
					int tmp2=s-1;
					if(s==0){
						tmp2=n-1;
					}
					if(e==n-1){
						tmp1=0;
					}
					st.insert({tmp1,tmp2});
				}
			}
			if(e==n-1 || sum>=50){
				sum-=a[s];
				s++;
			}
			else{
				e++;
				sum+=a[e];
			}
		}
		ans=max(ans,cnt);
		next_permutation(a,a+n);
	}
	printf("%d",ans);
}
