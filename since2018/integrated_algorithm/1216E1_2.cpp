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
	long long t;
	cin>>t;
	while(t--){	
		long long k;
		cin>>k;
		long long cur_val=1;
		long long sum_len=0;
		string s = "";
		while(1)
		{
			s+=to_string(cur_val++);
			if(sum_len+s.length()>=k)
			{
				break;
			}
			sum_len+=s.length();
		}
		k-=sum_len;
		cout<<s[k-1]<<endl;
	}
	return 0;
}
