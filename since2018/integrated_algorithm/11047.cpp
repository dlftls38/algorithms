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
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	int i;
	int a[10]={0};
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int count=0;
	for(i=n-1;i>=0;i--){
		if(k/a[i]){
		count+=k/a[i];
		k-=k/a[i]*a[i];	
		}
	}
	printf("%d",count);
}
