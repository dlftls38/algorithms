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
	int i,j,k;
	int a[10];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int line[10]={0};
	for(i=0;i<n;i++){
		line[i]=i+1;
	}
	int round=1;
	for(i=2;i<=n;i++){
		round*=i;
	}
	for(i=0;i<round;i++){
		int check=0;
		for(j=0;j<n;j++){
			int cnt=0;
			for(k=0;k<j;k++){
				if(line[k]>line[j]){
					cnt++;
				}
			}
			if(cnt!=a[line[j]-1]){
				check=1;
			}
		}
		if(check==1){
			next_permutation(line,line+n);
		}
		else{
			for(j=0;j<n;j++){
				printf("%d ",line[j]);
			}
			break;
		}
	}
}
