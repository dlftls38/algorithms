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
vector<int>v[100000];
int main(){
	int n;
	scanf("%d",&n);
	string s;
	cin>>s;
	int i,j;
	int a[100];
	int b[100];
	for(i=0;i<n;i++){
		scanf("%d%d",&a[i],&b[i]);
		for(j=b[i];j<100000;j+=a[i]){
			v[j].push_back(i);
		}
	}
	int ans=0;
	for(i=1;i<100000;i++){
		int cnt=0;
		for(j=0;j<n;j++){
			cnt+=s[j]-48;
		}
		int size=v[i].size();
		for(j=0;j<size;j++){
			s[v[i][j]]=((s[v[i][j]]-48+1)%2+48);
		}
		ans=max(ans,cnt);
	}
	printf("%d",ans);
}
