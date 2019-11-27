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
pii dir[] = { {1,0},{-1,0},{0,1},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1} };
int main(){
	long long n;
	cin>>n;
	int i,j;
	long long cur=2;
	for(i=1;;i++){
		long long sum=cur;
		long long temp=cur;
		for(j=0;j<i;j++){
			sum++;
			temp*=2;
			sum+=temp;
		}
		cur++;
		if(n<=sum){
			break;
		}
	}
	printf("%d",i);	
}
