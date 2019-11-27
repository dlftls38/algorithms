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
	int m,n;
	scanf("%d%d",&m,&n);
	int a[10]={0};
	int i;
	for(i=m;i<=n;i++){
		int k=i;
		if(k==0){
			a[0]++;
		}
		while(k>0){
			a[k%10]++;
			k/=10;
		}
	}
	for(i=0;i<10;i++){
		printf("%d ",a[i]);
	}
}
