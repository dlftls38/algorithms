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
	vector<string>ans;
	for(int c=1;c<100;c++){
		int n;
		char trash;
		scanf("%d%c",&n,&trash);
		if(n==0){
			break;
		}
		vector<string>cal={"Jan:","Feb:","Mar:","Apr:","May:","Jun:","Jul:","Aug:","Sep:","Oct:","Nov:","Dec:"};
		for(int i=0;i<n;i++){
			char temp[110]={0};
			fgets(temp,100,stdin);
			cal[(temp[3]-48)*10+temp[4]-48-1]+='*';
		}
		char tt[100]={0};
		sprintf(tt,"Case #%d:",c);
		ans.push_back(tt);
		for(int i=0;i<12;i++){
			ans.push_back(cal[i]);
		}
	}
	for(int i=0;i<ans.size();i++){
		printf("%s",ans[i].c_str());
		if(i!=ans.size()-1){
			printf("\n");
		}
	}
}
