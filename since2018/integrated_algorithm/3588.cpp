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
using namespace std;
typedef pair<int,int> pii;
int main(){
	int k;
	scanf("%d",&k);
	int i,j;
	for(i=1;i<=k;i++){
		int n;
		scanf("%d",&n);
		int s,f;
		scanf("%d%d",&s,&f);
		int ans=0;
		for(j=0;j<n;j++){
			int si,fi,ri;
			scanf("%d%d%d",&si,&fi,&ri);
			int q,w;
			if(si>=s){
				q=si;
			}
			else{
				q=s;
			}
			if(fi<=f){
				w=fi;
			}
			else{
				w=f;
			}
			if(w-q>=0){
				ans+=(w-q+1)*ri;
			}
		}
		printf("Data Set %d:\n%d\n\n",i,ans);
	}
}
