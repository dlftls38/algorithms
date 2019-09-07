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
	int x=0;
	for(int i=0;i<n;i++){
		int k;
		scanf("%d",&k);
		x=max(x,k);
	}
	printf("%d",x);
}
