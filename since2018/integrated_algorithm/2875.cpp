#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <limits.h>
#include <functional>
using namespace std;
int main(){
	int n,m,k;
	scanf("%d%d%d",&n,&m,&k);
	int q=n/2;
	int w=m;
	k-=n%2;
	if(q>w){
		k-=(q-w)*2;
		q=w;
	}
	if(q<w){
		k-=w-q;
		w=q;
	}
	int ans=q;
	if(k>0){
		ans-=k/3;
		if(k%3>0){
			ans--;
		}
	}
	printf("%d",ans);
}
