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
	int alphabat[26]={0};
	char ans[51]={0};
	for(auto it : s){
		alphabat[it-'A']++;
	}
	if(len%2==0){
		for(i=0;i<26;i++){
			if(alphabat[i]%2==1){
				printf("I'm Sorry Hansoo");
				return 0;
			}
		}
		int pos=0;
		for(i=0;i<26;i++){
			for(j=0;j<alphabat[i];j+=2){
				ans[pos]=i+'A';
				ans[len-1-pos]=i+'A';
				pos++;
			}
		}
		for(i=0;i<len;i++){
			printf("%c",ans[i]);
		}
	}
	else{
		int cnt=0;
		int odd;
		for(i=0;i<26;i++){
			if(alphabat[i]%2==1){
				cnt++;
				odd=i;
			}
		}
		if(cnt==1){
			int pos=0;
			for(i=0;i<26;i++){
				if(i==odd){
					for(j=0;j<alphabat[i]/2;j++){
						ans[pos]=i+'A';
						ans[len-1-pos]=i+'A';
						pos++;
					}
					alphabat[i]=1;
				}
				else{
					for(j=0;j<alphabat[i];j+=2){
						ans[pos]=i+'A';
						ans[len-1-pos]=i+'A';
						pos++;
					}	
				}
			}
			for(j=0;j<alphabat[odd];j++){
				ans[pos]=odd+'A';
				pos++;
			}	
			for(i=0;i<len;i++){
				printf("%c",ans[i]);
			}
		}
		else{
			printf("I'm Sorry Hansoo");
		}
	}
}
