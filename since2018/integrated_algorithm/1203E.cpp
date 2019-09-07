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
int a[150002];
int check[150002];
int main(){
	int n;
	int i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		int temp;
		scanf("%d",&temp);
		a[temp]++;
	}
	for(i=1;i<=150000;i++){
		check[i]+=a[i];
		if(i-1>=1 && check[i-1]==0 && check[i]>0){
			check[i-1]++;
			check[i]--;
		}
		if(i+1<=150001 && check[i]>1){
			check[i+1]++;
			check[i]--;
		}
	}
	int ans=0;
	for(i=1;i<=150001;i++){
		if(check[i]>0)ans++;
	}
	printf("%d",ans);
}
