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
#define MAX_SIZE 1000001
using namespace std;
const int N=100001;
int par[N];
int sequence[100000];
void init(){
    for(int i=1;i<N;i++)
        par[i]=i;
}
int find(int here){
    if(here==par[here])return here;
    return par[here]=find(par[here]);
}
void unions(int x,int y){
    x=find(x),y=find(y);
    if(x==y)return;
    par[x]=y;
}
int main(){
	init();
	int g,p;
	scanf("%d%d",&g,&p);
	int i,j;
	for(i=0;i<p;i++){
		scanf("%d",&sequence[i]);
	}
	int ans=0;
	for(i=0;i<p;i++){
		int last=find(sequence[i]);
		if(0==last){
			break;
		}
		ans++;
		unions(sequence[i],last-1);
	}
	printf("%d",ans);
}
