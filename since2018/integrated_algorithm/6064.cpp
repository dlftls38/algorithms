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
#include <math.h>
using namespace std;
int gcd(int a, int b)
{
	int c;
	while (b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}
int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int m,n,x,y;
		scanf("%d%d%d%d",&m,&n,&x,&y);
		int cx=x;
		int cy=x;
		cx%=m;
		cy%=n;
		if(cx==0)
			cx=m;
		if(cy==0)
			cy=n;
		int count=x;
		int mx=lcm(m,n);
		int suc=0;
		while(1){
			if(cx==x && cy==y){
				suc=1;
				break;
			}
			cx+=m;
			cy+=m;
			cx%=m;
			cy%=n;
			if(cx==0)
				cx=m;
			if(cy==0)
				cy=n;
			count+=m;
			if(count>mx){
				break;
			}
		}
		if(suc==1){
			printf("%d\n",count);
		}
		else{
			printf("-1\n");
		}
	}
}
