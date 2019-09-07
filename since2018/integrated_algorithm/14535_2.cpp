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
	int cnt=0;
	while(1){
		cnt++;
		int n;
		scanf("%d",&n);
		if(n==0){
			break;
		}
		int i,j;
		cin.ignore();
		vector<string>cal={"Jan:","Feb:","Mar:","Apr:","May:","Jun:","Jul:","Aug:","Sep:","Oct:","Nov:","Dec:"};
		for(i=0;i<n;i++){
			char temp[110]={0};
			fgets(temp,100,stdin);
			cal[(temp[3]-48)*10+temp[4]-48-1]+="*";
		}
		printf("Case #%d:\n",cnt);
		for(auto it : cal){
			printf("%s\n",it.c_str());
		}
	}
}
