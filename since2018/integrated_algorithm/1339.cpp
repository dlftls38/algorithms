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
	int n;
	scanf("%d",&n);
	char a[10][9]={0};
	int i,j,k;
	for(i=0;i<n;i++){
		scanf("%s",a[i]);
	}
	int check[26]={0};
	int val[11]={0};
	int tail=1;
	for(i=0;i<n;i++){
		int len=strlen(a[i]);
		for(j=0;j<len;j++){
			if(check[a[i][j]-'A']==0){
				check[a[i][j]-'A']=tail;
				val[tail]=10-tail;
				tail++;
			}
		}
	}
	int round=1;
	for(i=2;i<=tail-1;i++){
		round*=i;
	}
	int mul[9]={0};
	mul[0]=1;
	for(i=1;i<9;i++){
		mul[i]=mul[i-1]*10;
	}
	int ans=0;
	for(i=0;i<round;i++){
		int sum=0;
		for(j=0;j<n;j++){
			int len=strlen(a[j]);
			for(k=0;k<len;k++){
				sum+=1LL*val[check[a[j][k]-'A']]*mul[len-1-k];
			}
		}
		ans=max(ans,sum);
		next_permutation(val+1,val+tail);
	}
	printf("%d",ans);
}
