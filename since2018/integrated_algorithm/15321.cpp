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
	vector<int>a;
	int i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		int temp;
		scanf("%d",&temp);
		a.push_back(temp);
	}
	int ans=0;
	for(i=0;i<n-1;i++){
		int len=a.size();
		int temp_val=100001;
		int temp_pos;
		for(j=0;j<len;j++){
			if(temp_val>a[j]){
				temp_val=a[j];
				temp_pos=j;
			}
		}
		if(temp_pos==0){
			ans+=a[temp_pos+1]-a[temp_pos];
		}
		else if(temp_pos==len-1){
			ans+=a[temp_pos-1]-a[temp_pos];
		}
		else{
			ans+=min(a[temp_pos+1],a[temp_pos-1])-a[temp_pos];
		}
		a.erase(a.begin()+temp_pos);
	}
	printf("%d",ans);
}
