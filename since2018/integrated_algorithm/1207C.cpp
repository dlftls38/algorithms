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
	int tc;
	scanf("%d",&tc);
	while(tc--){
		int i,j;
		int n,a,b;
		scanf("%d%d%d",&n,&a,&b);
		string s;
		cin>>s;
		int len=s.length();
		long long bar=1;
		long long road=0;
		int cur=1;
		long long temp_bar=0;
		long long temp_road=0;
		long long origin_bar=0;
		long long origin_road=0;
		int cnt=0;
		for(i=0;i<len;i++){
			j=i;
			while(cur==2 && s[j]=='0' && j<len){
				cnt++;
				j++;
			}
			if(j==len)break;
			if(cnt>1){
				temp_bar=3+(cnt-2);
				temp_road=4+(cnt-2);
				origin_bar=cnt*2;
				origin_road=cnt;
				if(temp_bar*b+temp_road*a>=origin_bar*b+origin_road*a){
					bar+=origin_bar;
					road+=origin_road;
				}
				else{
					bar+=temp_bar;
					road+=temp_road;
				}
				cnt=0;
				i=j;
				temp_bar=0;
				temp_road=0;
				origin_bar=0;
				origin_road=0;
			}
			if(cnt==1){
				if(i==len-1){
					break;
				}
				else{
					cnt=0;
					bar+=2;
					road++;
					continue;
				}
			}
			if(s[i]=='0'){
				bar++;
				road++;
			}
			else{
				bar+=2;
				road++;
				if(s[i-1]=='0' && cur==1){
					bar++;
					road++;
				}
				cur=2;
			}
			//printf("%lld %lld %d\n",bar,road,i);
		}
		if(cnt>0){
			bar+=cnt;
			road+=cnt+1;
		}
		//printf("%lld %lld\n",bar,road);
		printf("%lld\n",bar*b+road*a);
	}
}
