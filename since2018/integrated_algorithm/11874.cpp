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
	int l,d,x;
	scanf("%d%d%d",&l,&d,&x);
	int i,j;
	int ans;
	for(i=d;i>=l;i--){
		int temp=i;
		int sum=0;
		while(temp>0){
			sum+=temp%10;
			temp/=10;
		}
		if(sum==x){
			ans=i;
			break;
		}
	}
	for(i=l;i<=d;i++){
		int temp=i;
		int sum=0;
		while(temp>0){
			sum+=temp%10;
			temp/=10;
		}
		if(sum==x){
			printf("%d\n%d",i,ans);
			return 0;
		}
	}
}
