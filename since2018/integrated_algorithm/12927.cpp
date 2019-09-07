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
	string s;
	cin>>s;
	int len=s.length();
	int i,j;
	int ans=0;
	for(i=0;i<len;i++){
		if(s[i]=='Y'){
			for(j=i;j<len;j+=i+1){
				if(s[j]=='Y'){
					s[j]='N';
				}
				else{
					s[j]='Y';
				}
			}
			ans++;
		}
	}
	printf("%d",ans);
}
