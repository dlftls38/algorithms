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
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int a[50];
	int i,j;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int ans1=0;
	int start=0;
	for(i=0;i<n;i++){
		if(start<a[i]){
			start=a[i];
			ans1++;
		}
	}
	printf("%d\n",ans1);
	ans1=0;
	start=0;
	for(i=n-1;i>=0;i--){
		if(start<a[i]){
			start=a[i];
			ans1++;
		}
	}
	printf("%d\n",ans1);
}
