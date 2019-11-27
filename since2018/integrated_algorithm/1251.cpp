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
	string ans="zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
	for(i=1;i<len-1;i++){
		string head,mid,tail;
		head=s.substr(0,i);
		reverse(head.begin(),head.end());
		for(j=i+1;j<len;j++){
			mid=s.substr(i,j-i);
			tail=s.substr(j,len-j);
			reverse(mid.begin(),mid.end());
			reverse(tail.begin(),tail.end());
			string temp = head+mid+tail;
			if(ans.compare(temp)>0){
				ans=temp;
			}
		}
	}
	printf("%s",ans.c_str());
}
