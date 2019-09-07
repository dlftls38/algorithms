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
	int a[40000]={0};
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	vector<int>v;
	v.push_back(-1);
	int count=0;
	for(i=0;i<n;i++){
		if(v.back()<a[i]){
			count++;
			v.push_back(a[i]);
		}
		else{
			auto it=lower_bound(v.begin(),v.end(),a[i]);
			*it=a[i];
		}
	}
	printf("%d",count);
}
