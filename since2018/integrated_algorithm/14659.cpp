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
	int i,j;
	stack<int>s;
	int cnt=0;
	int ans=0;
	for(i=0;i<n;i++){
		int temp;
		scanf("%d",&temp);
		if(i>0){
			if(s.top()<temp){
				s.pop();
				cnt=0;
				s.push(temp);
			}
			else{
				cnt++;
				ans=max(ans,cnt);
			}
		}
		else{
			s.push(temp);
		}
	}
	printf("%d",ans);
}
