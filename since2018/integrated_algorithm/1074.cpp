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
int r,c;
int ans;
int cnt;
void dq(int size,int y,int x){
	if(size==1){
		if(y==r && x==c){
			ans=cnt;
		}
		else{
			cnt++;
		}
	}
	else{
		size/=2;
		if(r<y+size && c<x+size)
			dq(size,y,x);
		else
			cnt+=size*size;
		if(r<y+size && c>=x+size)
			dq(size,y,x+size);
		else
			cnt+=size*size;
		if(r>=y+size && c<x+size)
			dq(size,y+size,x);
		else
			cnt+=size*size;
		if(r>=y+size && c>=x+size)
			dq(size,y+size,x+size);
		else
			cnt+=size*size;
	}
}
int main(){
	int n;
	scanf("%d%d%d",&n,&r,&c);
	n=pow(2,n);
	dq(n,0,0);
	printf("%d",ans);
}
