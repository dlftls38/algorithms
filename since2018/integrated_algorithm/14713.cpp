#include <stdio.h>
#include <iostream>
#include <string.h>
#include <sstream>
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
	char t;
	scanf("%c",&t);
	vector<pair<string,int> >s[100];
	int i,j,k;
	string temp;
	int ssum=0;
	for(i=0;i<n;i++){
		getline(cin,temp);
		stringstream ss(temp);
		string str;
		int cnt=0;
		while(ss>>str){
			s[i].push_back({str,cnt++});
			ssum++;
		}
		sort(s[i].begin(),s[i].end());
	}
	int lsum=0;
	vector<string>l;
	getline(cin,temp);
	stringstream ss(temp);
	string str;
	while(ss>>str){
		l.push_back(str);
		lsum++;
	}
	if(lsum!=ssum){
		printf("Impossible");
		return 0;
	}
	int len=l.size();
	int check[100][100]={0};
	for(i=0;i<len;i++){
		int correct=0;
		for(j=0;j<n;j++){
			int len=s[j].size();
			int ll=0;
			int r=len-1;
			int mid=(ll+r)/2;
			while(ll<=r){
				mid=(ll+r)/2;
				if(s[j][mid].first.compare(l[i])==0){
					break;
				}
				else if(s[j][mid].first.compare(l[i])>0){
					r = mid-1;
				}
				else{
					ll = mid+1;
				}
			}
			//printf("%s\n",s[j][mid].first.c_str());
			if(s[j][mid].first.compare(l[i])!=0){
				continue;
			}
			for(k=s[j][mid].second+1;k<len;k++){
				if(check[j][k]==1){
					printf("Impossible");
					return 0;
				}
			}
			check[j][s[j][mid].second]=1;
			correct=1;
			break;
		}
		if(correct==0){
			printf("Impossible");
			return 0;
		}
	}
	printf("Possible");
}
