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
	int i;
	priority_queue<int>max_heap;
	priority_queue<int,vector<int>,greater<int> >min_heap;
	for(i=0;i<n;i++){
		int temp;
		scanf("%d",&temp);
		if(max_heap.size()==min_heap.size()){
			max_heap.push(temp);
		}
		else{
			min_heap.push(temp);
		}
		if(min_heap.size()>0 && max_heap.top()>min_heap.top()){
			int temp1=max_heap.top();
			int temp2=min_heap.top();
			max_heap.pop();
			min_heap.pop();
			max_heap.push(temp2);
			min_heap.push(temp1);
		}
		printf("%d\n",max_heap.top());
	}
}
