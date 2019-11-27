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
	int n;
	cin>>n;
	int i,j;
	while(n--){
		char s[123]={0};
		char t[123]={0};
		scanf("%s%s",s,t);
		int len_s=strlen(s);
		int len_t=strlen(t);
		for(i=len_s-1;i>=0;i--){
			if(s[i]=='0'){
				s[i]=0;
			}
			else{
				break;
			}
		}
		for(i=len_t-1;i>=0;i--){
			if(t[i]=='0'){
				t[i]=0;
			}
			else{
				break;
			}
		}
		len_s=strlen(s);
		len_t=strlen(t);
		for(i=0;i<len_t;i++){
			if(i<len_s){
				s[i]+=t[i]-'0';
				if(s[i]>'9'){
					s[i]-=10;
					s[i+1]++;
					if(s[i+1]==1){
						len_s++;
						s[i+1]+='0';
					}
				}
			}
			else{
				s[i]=t[i];
			}
		}
		len_s=strlen(s);
		for(i=0;i<len_s;i++){
			if(s[i]>'9'){
				s[i]-=10;
				s[i+1]++;
				if(i==len_s-1){
					len_s++;
					s[i+1]+='0';
				}
			}
		}
		for(i=0;i<len_s;i++){
			if(s[i]!='0'){
				printf("%s\n",s+i);
				break;
			}
		}
	}
}
