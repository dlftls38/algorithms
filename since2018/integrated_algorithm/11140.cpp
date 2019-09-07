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
		string temp="     ";
		string s;
		cin>>s;
		int i,j;
		int check=3;
		s = temp + s + temp;
		int len=s.length();
		for(i=3;i<len-3;i++){
			if(s[i]=='l' || s[i]=='o'){
				check=min(2,check);
			}
			if(s[i]=='l' && s[i+1]=='o' && s[i+2]=='l'){
				check=min(0,check);
			}
			if(s[i]=='l' && s[i+1]=='o' || s[i]=='o' && s[i+1]=='l' || s[i-1]=='l' && s[i+1]=='l' || s[i]=='l' && s[i+1]=='l'){
				check=min(1,check);
			}
		}
		printf("%d\n",check);
	}
}
