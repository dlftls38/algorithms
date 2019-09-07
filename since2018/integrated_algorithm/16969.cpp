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
char a[1000001];
int main(){
	scanf("%s",a);
	int len=strlen(a);
	int i,j;
	long long ans;
	if(a[0]=='c')ans=26;
	else ans=10;
	for(i=1;i<len;i++){
		if(a[i]=='c'){
			if(a[i-1]==a[i]){
				ans*=25;
			}
			else{
				ans*=26;
			}
		}
		else{
			if(a[i-1]==a[i]){
				ans*=9;
			}
			else{
				ans*=10;
			}
		}
		ans%=MOD;
	}
	printf("%lld",ans);
}
