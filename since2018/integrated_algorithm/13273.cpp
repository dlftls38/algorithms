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
		string s;
		cin>>s;
		int len=s.length();
		int i,j;
		if(s[0]<='9'){
			int cnt=0;
			string ans;
			for(i=len-1;i>=0;i--){
				if(cnt==0){
					if(s[i]=='1'){
						ans="I"+ans;
					}
					if(s[i]=='2'){
						ans="II"+ans;
					}
					if(s[i]=='3'){
						ans="III"+ans;
					}
					if(s[i]=='4'){
						ans="IV"+ans;
					}
					if(s[i]=='5'){
						ans="V"+ans;
					}
					if(s[i]=='6'){
						ans="VI"+ans;
					}
					if(s[i]=='7'){
						ans="VII"+ans;
					}
					if(s[i]=='8'){
						ans="VIII"+ans;
					}
					if(s[i]=='9'){
						ans="IX"+ans;
					}
				}
				if(cnt==1){
					if(s[i]=='1'){
						ans="X"+ans;
					}
					if(s[i]=='2'){
						ans="XX"+ans;
					}
					if(s[i]=='3'){
						ans="XXX"+ans;
					}
					if(s[i]=='4'){
						ans="XL"+ans;
					}
					if(s[i]=='5'){
						ans="L"+ans;
					}
					if(s[i]=='6'){
						ans="LX"+ans;
					}
					if(s[i]=='7'){
						ans="LXX"+ans;
					}
					if(s[i]=='8'){
						ans="LXXX"+ans;
					}
					if(s[i]=='9'){
						ans="XC"+ans;
					}
				}
				if(cnt==2){
					if(s[i]=='1'){
						ans="C"+ans;
					}
					if(s[i]=='2'){
						ans="CC"+ans;
					}
					if(s[i]=='3'){
						ans="CCC"+ans;
					}
					if(s[i]=='4'){
						ans="CD"+ans;
					}
					if(s[i]=='5'){
						ans="D"+ans;
					}
					if(s[i]=='6'){
						ans="DC"+ans;
					}
					if(s[i]=='7'){
						ans="DCC"+ans;
					}
					if(s[i]=='8'){
						ans="DCCC"+ans;
					}
					if(s[i]=='9'){
						ans="CM"+ans;
					}
				}
				if(cnt==3){
					if(s[i]=='1'){
						ans="M"+ans;
					}
					if(s[i]=='2'){
						ans="MM"+ans;
					}
					if(s[i]=='3'){
						ans="MMM"+ans;
					}
				}
				cnt++;
			}
			printf("%s\n",ans.c_str());
		}
		else{
			int ans=0;
			s+="     ";
			for(i=0;i<len;i++){
				if(s[i]=='M')ans+=1000;
				if(s[i]=='C' && s[i+1]=='M'){
					ans+=900;
					i++;
				}
				if(s[i]=='D')ans+=500;
				if(s[i]=='C' && s[i+1]=='D'){
					ans+=400;
					i++;
				}
				if(s[i]=='C')ans+=100;
				if(s[i]=='X' && s[i+1]=='C'){
					ans+=90;
					i++;
				}
				if(s[i]=='L')ans+=50;
				if(s[i]=='X' && s[i+1]=='L'){
					ans+=40;
					i++;
				}
				if(s[i]=='X')ans+=10;
				if(s[i]=='I' && s[i+1]=='X'){
					ans+=9;
					i++;
				}
				if(s[i]=='V')ans+=5;
				if(s[i]=='I' && s[i+1]=='V'){
					ans+=4;
					i++;
				}
				if(s[i]=='I')ans+=1;
			}
			printf("%d\n",ans);
		}
	}
}
