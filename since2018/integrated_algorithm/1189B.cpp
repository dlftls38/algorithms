#include <stdio.h>
#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <limits.h>
#include <functional>
#include <math.h>
#include <fstream>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	vector<int>v;
	for(i=0;i<n;i++){
		int x;
		scanf("%d",&x);
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	if(v[n-2]+v[0]>v[n-1]){
		printf("YES\n");
		for(i=0;i<n;i++){
			printf("%d ",v[i]);
		}
	}
	else{
		int check=0;
		for(i=1;i<n-2;i++){
			if(v[i]+v[n-2]>v[n-1]){
				int x=v[i];
				v.erase(v.begin()+i);
				v.insert(v.begin(),x);
				check=1;
				break;
			}
		}
		if(check==1){
			printf("YES\n");
			for(i=0;i<n;i++){
				printf("%d ",v[i]);
			}
		}
		else{
			printf("NO\n");
		}
	}
}
