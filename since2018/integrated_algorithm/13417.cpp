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
	int tc;
	scanf("%d",&tc);
	while(tc--){
		int n;
		char trash;
		scanf("%d%c",&n,&trash);
		int i,j;
		vector<char>v;
		for(i=0;i<n;i++){
			char a,b;
			scanf("%c%c",&a,&b);
			v.push_back(a);
		}
		string s;
		s+=v[0];
		for(i=1;i<n;i++){
			if(s[0]<v[i]){
				s+=v[i];
			}
			else{
				s= v[i]+s;
			}
		}
		printf("%s\n",s.c_str());
	}
}
