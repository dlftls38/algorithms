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
using namespace std;
typedef pair<int,int> pii;
int main(){
	while(1){
		int n;
		scanf("%d",&n);
		if(n==-1){
			break;
		}
		set<int>divisor;
		int i;
		int sum=0;
		for(i=1;i*i<n;i++){
			if(n%i==0){
				divisor.insert(i);
				sum+=i;
				if(n/i!=n){
					divisor.insert(n/i);
					sum+=n/i;
				}
			}
		}
		if(n==i*i){
			divisor.insert(i);
			sum+=i;
		}
		if(sum==n){
			printf("%d = ",n);
			int len=divisor.size();
			i=0;
			for(auto it : divisor){
				i++;
				if(i==len){
					printf("%d\n",it);
				}
				else{
					printf("%d + ",it);	
				}
			}
		}
		else{
			printf("%d is NOT perfect.\n",n);
		}
	}
}
