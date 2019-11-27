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
	while(1){
		string s;
		getline(cin,s);
		if(s.compare("#")==0)break;
		int ans=0;
		vector<char>vowel={'a','e','o','u','i','A','E','O','U','I'};
		for(auto it : s){
			if(find(vowel.begin(),vowel.end(),it)!=vowel.end()){
				ans++;
			}
		}
		printf("%d\n",ans);
	}
}
