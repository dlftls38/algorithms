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
int a[1000001];
int main(){
	int n,m,k;
	scanf("%d%d%d",&n,&m,&k);
	int i,j;
	for(i=0;i<m;i++){
		int x;
		scanf("%d",&x);
		a[x]=1;
	}
	int p=1;
	for(i=0;i<k;i++){
		int u,v;
		scanf("%d%d",&u,&v);
		if(a[p]==0 && (p==u || p==v)){
			if(p==u){
				p=v;
			}
			else{
				p=u;
			}
		}
	}
	printf("%d",p);
}
