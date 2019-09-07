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
using namespace std;
typedef pair<int,int> pii;
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=1;i<=n;i++){
		int len,k;
		char s[1001];
		scanf("%s%d",s,&k);
		len=strlen(s);
		int cnt=0;
		for(j=0;j<len-k+1;j++){
			if(s[j]=='-'){
				cnt++;
				for(int l=0;l<k;l++){
					s[j+l]=='-'?s[j+l]='+':s[j+l]='-';
				}
			}
		}
		int ans=0;
		for(;j<len;j++){
			if(s[j]=='-'){
				ans=1;
				break;
			}
		}
		if(ans==1){
			printf("Case #%d: IMPOSSIBLE\n",i);
		}
		else{
			printf("Case #%d: %d\n",i,cnt);
		}
	}
}
