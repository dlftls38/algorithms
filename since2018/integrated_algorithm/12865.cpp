#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <functional> 
using namespace std;
int a[100001];
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	int i,j;
	for(i=0;i<n;i++){
		int w,v;
		scanf("%d%d",&w,&v);
		for(j=k;j>=0;j--){
			if(j+w<=k && a[j]+v>a[j+w]){
				a[j+w]=a[j]+v;
			}
		}
	}
	printf("%d",a[k]);
}
