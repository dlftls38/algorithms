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
	int n;
	scanf("%d",&n);
	int i,j;
	vector<string>in;
	vector<string>out;
	map<string,int>sequence;
	for(i=0;i<n;i++){
		string temp;
		cin>>temp;
		in.push_back(temp);
		sequence[temp]=i+1;
	}
	for(i=0;i<n;i++){
		string temp;
		cin>>temp;
		out.push_back(temp);
	}
	int ans=0;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(sequence[out[j]]<sequence[out[i]]){
				ans++;
				break;
			}
		}
	}
	printf("%d",ans);
}
