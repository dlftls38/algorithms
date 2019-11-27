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
pii dir[] = { {1,0},{-1,0},{0,1},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1} };
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		int len=s.length();
		int i;
		int ans=-1;
		for(i=0;i<len;i++){
			if(s[i]=='1')
				ans=max({ans,i+1,abs(len-i)});
		}
		if(ans>0){
			printf("%d\n",ans*2);
		}
		else{
			printf("%d\n",len);
		}
	}
}
