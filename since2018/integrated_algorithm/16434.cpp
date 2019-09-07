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
	long long atk;
	scanf("%d%lld",&n,&atk);
	int i,j;
	long long max_hp=0;
	long long cur_hp=0;
	for(i=0;i<n;i++){
		int t,a,h;
		scanf("%d%d%d",&t,&a,&h);
		if(t==1){
			cur_hp+=(h/atk+(h%atk>0?1:0)-1)*a;
		}
		else{
			cur_hp-=h;
			if(cur_hp<0){
				cur_hp=0;
			}
			atk+=a;
		}
		max_hp=max(max_hp,cur_hp);
	}
	printf("%lld",max_hp+1);
}
