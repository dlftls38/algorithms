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
	string s[1000];
	for(i=0;i<n;i++){
		cin>>s[i];
	}
	for(i=0;i<100;i++){
		map<string,int>mp;
		int check=0;
		for(j=0;j<n;j++){
			mp[s[j].substr(s[j].length()-1-i)]++;
			if(mp[s[j].substr(s[j].length()-1-i)]>1){
				check=1;
				break;
			}
		}
		if(check==0){
			printf("%d",i+1);
			return 0;
		}
	}
}
