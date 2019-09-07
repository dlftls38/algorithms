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
char a[1001][1001];
int ans[1001][1001];
int check[1001][1001];
int main(){
	int i,j;
	int n,m;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++){
		scanf("%s",a[i]);
		for(j=0;j<m;j++){
			if(a[i][j]=='R'){
				check[i][j]=1;
			}
			if(a[i][j]=='C'){
				ans[i][j]=1;
			}
		}
	}
	int arrive=0;
	int res=0;
	for(i=0;i<m-1;i++){
		for(j=0;j<n;j++){
			if(check[j][i]==1 && j+1<n && i+1<m && a[j+1][i+1]!='#'){
				int temp=0;
				if(a[j+1][i+1]=='C')temp++;
				ans[j+1][i+1] = max(ans[j+1][i+1],ans[j][i]+temp);
				if(a[j+1][i+1]=='O')arrive=1;
				if(a[j+1][i+1]=='O')
					res = max(res,ans[j+1][i+1]);
				check[j+1][i+1]=1;
			}
			if(check[j][i]==1 && j-1>=0 && i+1<m && a[j-1][i+1]!='#'){
				int temp=0;
				if(a[j-1][i+1]=='C')temp++;
				ans[j-1][i+1] = max(ans[j-1][i+1],ans[j][i]+temp);
				if(a[j-1][i+1]=='O')arrive=1;
				if(a[j-1][i+1]=='O')
					res = max(res,ans[j-1][i+1]);
				check[j-1][i+1]=1;
			}
			if(check[j][i]==1 && i+1<m && a[j][i+1]!='#'){
				int temp=0;
				if(a[j][i+1]=='C')temp++;
				ans[j][i+1] = max(ans[j][i+1],ans[j][i]+temp);
				if(a[j][i+1]=='O')arrive=1;
				if(a[j][i+1]=='O')
					res = max(res,ans[j][i+1]);
				check[j][i+1]=1;
			}
		}
	}
//	printf("\n");
//	for(i=0;i<n;i++){
//		for(j=0;j<m;j++){
//			printf("%d ",ans[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");
	if(arrive==0){
		printf("-1");
	}
	else{
		printf("%d",res);
	}
}
