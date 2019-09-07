#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <limits.h>
#include <functional>
using namespace std;
int a[100001];
int main(){
	int n;
	int i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	int m;
	scanf("%d",&m);
	for(i=0;i<m;i++){
		int x;
		scanf("%d",&x);
		if(*lower_bound(a,a+n,x)==x){
			printf("1\n");
		}
		else{
			printf("0\n");
		}
	}
}
