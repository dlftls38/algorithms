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
	int m,n,k;
	scanf("%d%d%d",&m,&n,&k);
	int i,j,l,ll;
	char a[10][11]={0};
	for(i=0;i<m;i++){
		scanf("%s",a[i]);
		for(ll=0;ll<k;ll++){
		for(j=0;j<n;j++){
				for(l=0;l<k;l++){
					printf("%c",a[i][j]);	
				}
			}
			printf("\n");
		}
	}
}
