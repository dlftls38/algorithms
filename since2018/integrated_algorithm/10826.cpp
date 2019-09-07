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
	if(n==0){
		printf("0");
		return 0;
	}
	int a[10000]={0};
	int b[10000]={0};
	b[0]=1;
	int tail=1;
	for(int i=0;i<n;i++){
		int temp[10000]={0};
		for(int j=0;j<tail;j++){
			temp[j]=b[j];
		}
		for(int j=0;j<tail;j++){
			b[j]+=a[j];
			if(b[j]>=10){
				b[j]-=10;
				b[j+1]++;
			}
		}
		if(b[tail]!=0){
			tail++;
		}
		for(int j=0;j<tail;j++){
			a[j]=temp[j];
		}
	}
	if(a[tail-1]==0){
		tail--;
	}
	for(int j=tail-1;j>=0;j--){
		printf("%d",a[j]);
	}
}
