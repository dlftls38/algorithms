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
long long psum[100000];
long long ks[50];
int tail;
int main(){
	int n,k;
	int i,j;
	scanf("%d%d",&n,&k);
	if(k==1){
		tail=1;
		ks[0]=1;
	}
	else if(k==-1){
		tail=2;
		ks[0]=1;
		ks[1]=-1;
	}
	else{
		ks[tail++]=1;
		long long kk=k;
		long long mx=pow(10,14);
		long long mn=-pow(10,14);
		while(mx>=kk && mn<=kk){
			ks[tail++]=kk;
			kk*=k;
		}
	}
	for(i=0;i<n;i++){
		int x;
		scanf("%d",&x);
		psum[i]=x;
		if(i>0){
			psum[i]+=psum[i-1];
		}
	}
	map<long long,long long>m;
	long long ans=0;
	for(i=0;i<n;i++){
		for(j=0;j<tail;j++){
			ans+=m[psum[i]-ks[j]];
			if(psum[i]==ks[j]){
				ans++;
			}
		}
		m[psum[i]]++;
	}
	printf("%lld",ans);
}
