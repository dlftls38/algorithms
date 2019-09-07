#include <stdio.h>
#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <limits.h>
#include <functional>
#include <math.h>
#include <fstream>
using namespace std;
int mp[401][401];
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	int i,j,l;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			mp[i][j]=987654321;
		}
	}
	for(i=0;i<k;i++){
		int a,b;
		scanf("%d%d",&a,&b);
		mp[a][b]=1;
	}
	for(l=1;l<=n;l++){
		for(i=1;i<=n;i++){
			for(j=1;j<=n;j++){
				mp[i][j]=min(mp[i][l]+mp[l][j],mp[i][j]);
			}
		}
	}
	int s;
	scanf("%d",&s);
	for(i=0;i<s;i++){
		int q,w;
		scanf("%d%d",&q,&w);
		if(mp[q][w]!=987654321){
			printf("-1\n");
		}
		else if(mp[w][q]!=987654321){
			printf("1\n");
		}
		else{
			printf("0\n");
		}
	}
}
