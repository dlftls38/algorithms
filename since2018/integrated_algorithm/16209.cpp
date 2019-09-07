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
	scanf("%d",&n);
	int i;
	vector<int>a;
	vector<int>b;
	for(i=0;i<n;i++){
		int x;
		scanf("%d",&x);
		if(x>=0){
			a.push_back(x);
		}
		else{
			b.push_back(x);
		}
	}
	int a_size=a.size();
	int b_size=b.size();
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	deque<int>aa;
	deque<int>bb;
	int cnt=0;
	for(i=a_size-1;i>=0;i--){
		if(cnt%2==1){
			aa.push_back(a[i]);
		}
		else{
			aa.push_front(a[i]);
		}
		cnt++;
	}
	cnt=0;
	if((a_size+b_size)%2==0){
		for(i=0;i<b_size;i++){
			if(cnt%2==0){
				bb.push_back(b[i]);
			}
			else{
				bb.push_front(b[i]);
			}
			cnt++;
		}
	}
	else{
		for(i=0;i<b_size;i++){
			if(cnt%2==1){
				bb.push_back(b[i]);
			}
			else{
				bb.push_front(b[i]);
			}
			cnt++;
		}
	}
	if(a_size%2==0 && b_size%2==0){
		for(auto it : aa){
			printf("%d ",it);
		}
		for(auto it : bb){
			printf("%d ",it);
		}
	}
	else if(a_size%2==0 && b_size%2==1){
		for(auto it : aa){
			printf("%d ",it);
		}
		for(auto it : bb){
			printf("%d ",it);
		}
	}
	else if(a_size%2==1 && b_size%2==0){
		for(auto it : bb){
			printf("%d ",it);
		}
		for(auto it : aa){
			printf("%d ",it);
		}
	}
	else if(a_size%2==1 && b_size%2==1){
		for(auto it : bb){
			printf("%d ",it);
		}
		for(auto it : aa){
			printf("%d ",it);
		}
	}
}
