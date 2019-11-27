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
#define MOD 1000000007
#define pi 3.141592
using namespace std;
typedef pair<int,int> pii;
int main(){
	int n;
	cin>>n;
	int i;
	int cnt[6]={1};
	string unist = "UNIST";
	map<char,int>mp;
	mp['U']=1;
	mp['N']=2;
	mp['I']=3;
	mp['S']=4;
	mp['T']=5;
	for(i=0;i<n;i++){
		string s;
		cin>>s;
		int j;
		for(j=min(5,(int)s.length());j>=1;j--){
			if(unist.find(s.substr(0,j))!=string::npos){
				//printf("!! %s\n",s.substr(0,j).c_str());
				for(int k=0;k<j;k++){
					cnt[mp[s.substr(0,j)[k]]]+=cnt[mp[s.substr(0,j)[0]]-1];
					//printf("%d %d\n",s.substr(0,j)[k],s.substr(0,j)[0]-1);
					cnt[mp[s.substr(0,j)[k]]]%=MOD;
				}
				break;
			}
		}
	}
	//printf("%d %d %d %d %d %d\n",cnt[0],cnt[1],cnt[2],cnt[3],cnt[4],cnt[5]);
	printf("%d",cnt[5]);
}
