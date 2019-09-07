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
string s;
char ans[101];
int len;
void solve(int head,int tail){
	if(head>tail){
		return;
	}
	char val='Z'+1;
	int pos;
	for(int i=head;i<=tail;i++){
		if(val>s[i] && ans[i]==0){
			val=s[i];
			pos=i;
		}
	}
	ans[pos]=val;
	for(int i=0;i<len;i++){
		if(ans[i]>='A'){
			printf("%c",ans[i]);
		}
	}
	printf("\n");
	solve(pos+1,tail);
	solve(head,pos-1);
}
int main(){
	cin>>s;
	len=s.length();
	solve(0,len-1);
}
