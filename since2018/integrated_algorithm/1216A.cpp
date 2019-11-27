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
	string s;
	cin>>s;
	int i,j;
	int ans=0;
	int a_cnt=0;
	int b_cnt=0;
	for(i=0;i<n;i++){
		if(s[i]=='a'){
			a_cnt++;
		}
		else{
			b_cnt++;
		}
		if(i%2==1){
			if(a_cnt<b_cnt){
				if(s[i]=='b'){
					s[i]='a';
				}
				else{
					s[i-1]='a';
				}
				ans++;
				a_cnt++;
				b_cnt--;
			}
			else if(a_cnt==b_cnt){
				
			}
			else{
				if(s[i]=='a'){
					s[i]='b';
				}
				else{
					s[i-1]='b';
				}
				ans++;
				a_cnt--;
				b_cnt++;
			}
		}
	}
	printf("%d\n%s",ans,s.c_str());
}
