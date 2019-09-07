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
int n,k;
int check[100001];
int recur(){
	queue<int>q;
	q.push(n);
	check[n]=0;
	while(!q.empty()){
		int cur=q.front();
		q.pop();
		if(cur==k){
			return check[cur];
		}
		if(cur*2<=100000 && (check[cur*2]>check[cur] || check[cur*2]==0)){
			check[cur*2]=check[cur];
			q.push(cur*2);
		}
		if(cur+1<=100000 && (check[cur+1]>check[cur]+1 || check[cur+1]==0)){
			check[cur+1]=check[cur]+1;
			q.push(cur+1);
		}
		if(cur-1>=0 && (check[cur-1]>check[cur]+1 || check[cur-1]==0)){
			check[cur-1]=check[cur]+1;
			q.push(cur-1);
		}
	}
}
int main(){
	scanf("%d%d",&n,&k);
	printf("%d",recur());
}
