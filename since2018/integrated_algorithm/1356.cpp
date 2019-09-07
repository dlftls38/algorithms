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
	int temp=n;
	int i,j;
	int len=0;
	while(temp>0){
		temp/=10;
		len++;
	}
	for(i=1;i<len;i++){
		long long temp1=n/pow(10,i);
		long long temp2=n%(long long)pow(10,i);
		long long ans1=1;
		long long ans2=1;
		int cnt=0;
		while(temp1>0){
			cnt++;
			ans1*=temp1%10;
			temp1/=10;
		}
		while(temp2>0){
			cnt++;
			ans2*=temp2%10;
			temp2/=10;
		}
		if(cnt!=len){
			ans2=0;
		}
		if(ans1==ans2){
			printf("YES");
			return 0;
		}
	}
	printf("NO");
}
