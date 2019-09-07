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
	priority_queue<int,vector<int>,greater<int> >min_heap;
	int temp,min_size=0;
	for(int i=0;i<n*n;i++){
		scanf("%d",&temp);
		if(min_size<n){
			min_heap.push(temp);
			min_size++;
		}
		else{
			if(min_heap.top()<temp){
				min_heap.pop();
				min_heap.push(temp);
			}
		}
	}
	printf("%d\n",min_heap.top());
}
