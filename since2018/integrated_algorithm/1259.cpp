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
	while(1){
		string s;
		cin>>s;
		if(s.compare("0")==0)break;
		int i;
		int len=s.length();
		int check=0;
		for(i=0;i<len/2;i++){
			if(s[i]!=s[len-1-i]){
				check=1;
			}
		}
		if(check==0){
			printf("yes\n");
		}
		else{
			printf("no\n");
		}
	}
}
