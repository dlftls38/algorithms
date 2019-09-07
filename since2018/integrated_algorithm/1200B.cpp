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
	int tc;
	scanf("%d",&tc);
	while(tc--){
		int n,m,k;
		scanf("%d%d%d",&n,&m,&k);
		int a[100]={0};
		int i,j;
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		int check=0;
		for(i=0;i<n-1;i++){
			m+=a[i];
			if(k>=a[i+1]){
				
			}
			else{
				if(a[i+1]-k<=m){
					m-=a[i+1]-k;
				}
				else{
					check=1;
					break;
				}
			}
		}
		if(check==1){
			printf("NO\n");
		}
		else{
			printf("YES\n");
		}
	}
}
