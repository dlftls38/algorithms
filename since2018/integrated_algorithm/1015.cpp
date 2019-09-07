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
	pair<int,int>a[50];
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++){
		scanf("%d",&a[i].first);
		a[i].second=i;
	}
	sort(a,a+n);
	int cur=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[j].second==cur){
				cur++;
				printf("%d ",j);
				break;
			}
		}
	}
}
