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
	int n;
	scanf("%d",&n);
	int a[1000]={0};
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	for(int i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
}
