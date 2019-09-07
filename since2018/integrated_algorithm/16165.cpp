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
using namespace std;
typedef pair<int,int> pii;
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int i,j;
	vector<string>group;
	vector<string>member[100];
	for(i=0;i<n;i++){
		char temp[101];
		scanf("%s",temp);
		group.push_back(temp);
		int cnt;
		scanf("%d",&cnt);;
		for(j=0;j<cnt;j++){
			scanf("%s",temp);
			member[i].push_back(temp);
		}
	}
	for(i=0;i<n;i++){
		sort(member[i].begin(),member[i].end());
	}
	for(i=0;i<m;i++){
		char temp[101];
		int temp2;
		scanf("%s%d",temp,&temp2);
		if(temp2==0){
			int pos = find(group.begin(),group.end(),temp)-group.begin();
			int len=member[pos].size();
			for(j=0;j<len;j++){
				printf("%s\n",member[pos][j].c_str());
			}
		}
		else{
			for(j=0;j<n;j++){
				if(find(member[j].begin(),member[j].end(),temp)!=member[j].end()){
					printf("%s\n",group[j].c_str());
					break;
				}
			}
		}
	}
}
