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
	int n,m;
	cin>>n>>m;
	int i,j,k;
	cin>>j;
	int start=1;
	int end=m;
	int ans=0;
	for(i=0;i<j;i++){
		int pos;
		cin>>pos;
		if(pos<=end && pos>=start){
			continue;
		}
		else{
			if(pos<start){
				ans+=start-pos;
				end-=start-pos;
				start-=start-pos;
			}
			else{
				ans+=pos-end;
				start+=pos-end;
				end+=pos-end;
			}
		}
	}
	printf("%d",ans);
}
