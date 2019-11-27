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
	int study[30000]={0};
	int n, k;
	cin>>n>>k;
	int i,j;
	int ans=0;
	for(i=0;i<k;i++){
		int l,t;
		cin>>l>>t;
		for(j=n;j>=0;j--){
			if(j+t<=n && study[j+t]<study[j]+l){
				study[j+t]=study[j]+l;
				ans=max(ans,study[j+t]);
			}
		}
	}
	printf("%d",ans);
}
