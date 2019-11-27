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
	long long k;
	cin>>n>>k;	
	int i,j;
	map<int,int>mp;
	for(i=0;i<n;i++){
		int a;
		cin>>a;
		mp[a]++;
	}
	while(1){
		auto head = mp.begin();
		int min_val=head->first;
		int cnt_min=head->second;
		while()
		auto tail = mp.end();
		tail--;
		int max_val=tail->first;
		int cnt_max=tail->second;
		printf("%d %d %d %d %d\n",min_val,max_val,cnt_min,cnt_max,k);
		if(cnt_min>k && cnt_max>k){
			printf("?\n");
			printf("%d",max_val-min_val);
			break;
		}
		if(cnt_min<cnt_max){
			int gap=k/cnt_min;
			mp[min_val+gap]+=cnt_min;
			mp[min_val]=0;
			k%=cnt_min;
		}
		else{
			int gap=k/cnt_max;
			mp[max_val-1]+=cnt_max;
			mp[max_val]=0;
			k%=cnt_max;
		}
	}
}
