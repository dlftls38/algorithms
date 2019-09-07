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
	int i,j;
	int ans=0;
	string s;
	cin>>s;
	int cnt=0;
	for(i=0;i<n;i++){
		int check=0;
		if(cnt==0){
			if(s[i]=='p'){
				cnt++;
			}
		}
		else if(cnt==1){
			if(s[i]=='P'){
				cnt++;
			}
			else{
				cnt=0;
			}
		}
		else if(cnt==2){
			if(s[i]=='A'){
				cnt++;
			}
			else{
				cnt=0;
			}
		}
		else if(cnt==3){
			cnt=0;
			if(s[i]=='p'){
				ans++;
				check=1;
			}
		}
		if(check==0 && s[i]=='p'){
			cnt=1;
		}
	}
	printf("%d",ans);
}
