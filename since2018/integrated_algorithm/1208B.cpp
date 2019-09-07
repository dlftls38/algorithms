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
#define pi 3.141592
using namespace std;
typedef pair<int,int> pii;
int main(){
	int n;
	int a[2000];
	scanf("%d",&n);
	int i,j,k;
	map<int,int>mp;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		mp[a[i]]++;
	}
	map<int,int>left;
	int start=0;
	for(auto it : mp){
		if(it.second>1){
			start+=it.second-1;
			left[it.first]=it.second-1;
		}
	}
	for(i=start;i<=n;i++){
		map<int,int>temp;
		for(j=0;j<i;j++){
			temp[a[j]]++;
		}
		int check=0;
		for(auto it : left){
			if(temp[it.first]<it.second){
				check=1;
				break;
			}
		}
		if(check==0){
			printf("%d",i);
			return 0;
		}
		for(j=j;j<n;j++){
			temp[a[j]]++;
			temp[a[j-i]]--;
			int check=0;
			for(auto it : left){
				if(temp[it.first]<it.second){
					check=1;
					break;
				}
			}
			if(check==0){
				printf("%d",i);
				return 0;
			}
		}
	}
}
/*
10
5 5 2 3 1 4 5 1 2 10
*/
