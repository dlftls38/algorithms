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
bool cmp(string a,string b){
	if(a.compare(b)>0){
		return true;
	}
	else{
		return false;
	}
}
int main(){
	string s[20];
	int n;
	scanf("%d",&n);
	int i,j;
	string inc[20];
	string dec[20];
	for(i=0;i<n;i++){
		cin>>s[i];
		inc[i]=s[i];
		dec[i]=s[i];
	}
	sort(inc,inc+n);
	sort(dec,dec+n,cmp);
	int cnt=0;
	for(i=0;i<n;i++){
		if(s[i].compare(inc[i])==0){
			cnt++;
		}
	}
	if(cnt==n){
		printf("INCREASING");
		return 0;
	}
	cnt=0;
	for(i=0;i<n;i++){
		if(s[i].compare(dec[i])==0){
			cnt++;
		}
	}
	if(cnt==n){
		printf("DECREASING");
		return 0;
	}
	printf("NEITHER");
}
