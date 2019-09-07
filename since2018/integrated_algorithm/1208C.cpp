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
int a[1000][1000];
int n;
int main(){
	scanf("%d",&n);
	int i,j,k,l;
	int cnt=0;
	for(k=0;k<n;k+=4){
		for(l=0;l<n;l+=4){
			for(i=k;i<k+4;i++){
				for(j=l;j<l+4;j++){
					a[i][j]=cnt++;
				}
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
//	for(i=0;i<n;i++){
//		int ans=0;
//		for(j=0;j<n;j++){
//			ans^=a[i][j];
//		}
//		printf("%d\n",ans);
//		ans=0;
//		for(j=0;j<n;j++){
//			ans^=a[j][i];
//		}
//		printf("%d\n",ans);
//	}
}
