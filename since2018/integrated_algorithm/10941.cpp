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
	int i;
	for(i=0;i<len;i+=2){
		int k=0;
		if(s[i]>='A'){
			k+=s[i]-55;
		}
		else{
			k+=s[i]-48;
		}
		k*=16;
		if(s[i+1]>='A'){
			k+=s[i+1]-55;
		}
		else{
			k+=s[i+1]-48;
		}
		printf("%c",k);
	}
}
