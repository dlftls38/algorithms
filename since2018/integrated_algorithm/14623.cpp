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
	string a;	
	string b;
	long long a1=0;
	long long b1=0;
	int i,j;
	cin>>a>>b;
	int lena=a.length();
	int lenb=b.length();
	long long temp=1;
	for(i=lena-1;i>=0;i--){
		if(a[i]=='1'){
			a1+=temp;
		}
		temp*=2;
	}
	temp=1;
	for(i=lenb-1;i>=0;i--){
		if(b[i]=='1'){
			b1+=temp;
		}
		temp*=2;
	}
	long long c=a1*b1;
	string ans;
	int check=0;
	for(i=0;i<63;i++){
		if(c%2==1){
			ans = '1'+ans;
		}
		else{
			ans = '0'+ans;
		}
		c/=2;
	}
	for(i=0;i<ans.length();i++){
		if(ans[i]=='1'){
			printf("%s",ans.c_str()+i);
			return 0;
		}
	}
}
