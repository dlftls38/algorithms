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
	int b_cnt,p_cnt;
	scanf("%d%d",&b_cnt,&p_cnt);
	int i,j,k,h;
	set<int>s;
	int b[14];
	int p[14];
	for(i=0;i<b_cnt;i++){
		scanf("%d",&b[i]);
	}
	for(i=0;i<p_cnt;i++){
		scanf("%d",&p[i]);
	}
	for(i=0;i<b_cnt;i++){
		for(j=0;j<1<<p_cnt;j++){
			for(k=0;k<1<<p_cnt;k++){
				if((j&k)==0){
					int l=0;
					int r=0;
					for(h=0;h<p_cnt;h++){
						if(j&(1<<h)){
							l+=p[h];
						}
						if(k&(1<<h)){
							r+=p[h];
						}
					}
					if(l==r){
						s.insert(b[i]+l+r);
					}
				}
			}
		}
	}
	for(auto it : s){
		printf("%d\n",it);
	}
}
