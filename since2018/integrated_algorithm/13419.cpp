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
	while(n--){
		string s;
		cin>>s;
		int len=s.length();
		string a;
		string b;
		int i,j;
		if(len%2==1){
			for(i=0;i<len;i+=2){
				a+=s[i];
			}
			for(i=1;i<len;i+=2){
				a+=s[i];
			}
			for(i=1;i<len;i+=2){
				b+=s[i];
			}
			for(i=0;i<len;i+=2){
				b+=s[i];
			}
		}
		else{
			for(i=0;i<len;i+=2){
				a+=s[i];
			}
			for(i=1;i<len;i+=2){
				b+=s[i];
			}
		}
		printf("%s\n%s\n",a.c_str(),b.c_str());
	}
}
