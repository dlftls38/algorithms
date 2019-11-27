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
	string s,t;
	cin>>s>>t;
	int i,j;
	int len_s=s.length();
	for(i=0;i<1111;i++){
		t+='0';
	}
	int len_t=t.length();
	int ans[1234]={0};
	int max_pos=0;
	for(i=1111;i>=0;i--){
		while(s.compare(t)>=0 && len_s==len_t || len_s>len_t){
			//printf("--\n%d\n%s\n%s\n--\n",i,s.c_str(),t.c_str());
			for(j=len_s-1;j>=0;j--){
				if(len_s>len_t){
					s[j+1]=s[j+1]-t[j]+'0';
					if(s[j+1]<'0'){
						s[j+1]+=10;
						s[j]--;
					}
				}
				else{
					s[j]=s[j]-t[j]+'0';
					if(s[j]<'0'){
						s[j]+=10;
						s[j-1]--;
					}
				}
			}
			for(j=0;j<len_s;j++){
				if(s[j]!='0'){
					break;
				}
			}
			s=s.substr(j);
			len_s-=j;
			ans[i]++;
			max_pos=max(max_pos,i);
		}
		len_t--;
		t=t.substr(0,len_t);
	}
	if(len_s==0){
		s="0";
	}
	for(i=max_pos;i>=0;i--){
		//printf("%d %d\n",ans[i],i);
		printf("%d",ans[i]);
	}
	printf("\n%s",s.c_str());
}
