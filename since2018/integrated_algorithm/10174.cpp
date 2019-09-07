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
	cin.ignore();
	int i,j;
	for(i=0;i<n;i++){
		string s;
		getline(cin,s);
		int len=s.length();
		for(j=0;j<len;j++){
			if(s[j]>='A' && s[j]<='Z'){
				s[j]+='a'-'A';
			}
		}
		int check=0;
		for(j=0;j<len/2;j++){
			if(s[j]!=s[len-1-j]){
				check=1;
				break;
			}
		}
		if(check==1){
			printf("No\n");
		}
		else{
			printf("Yes\n");
		}
	}
}
