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
#define MOD 10001
using namespace std;
long long x[1000];
long long exgcd(long long a,long long b,long long &x,long long &y)
{
    if(b==0){
        x=1;
        y=0;
        return a;
    }
    long long r=exgcd(b,a%b,x,y);
    long long temp=x;
    x=y;
    y=temp-(a/b)*y;
    return r;
}

int main(){
	int i,j;
    int T = 0;
    scanf("%d",&T);
    T = 2*T;
    for(i=1;i<=T;i+=2){
        scanf("%lld",&x[i]);
    }
    for(i=0;i<=10000;i++){
        long long a = i;
        long long c = x[3] - a*a * x[1];
        long long b,t;
        long long d = exgcd(a+1,MOD,b,t);
        if(c%d){
        	continue;	
		}
        b = b*c/d;
        for(j=2;j<=T;j++){
            if(j%2==1){
                if(x[j]!=(a*x[j-1]+b)%MOD){
                	break;	
				}
            }
			else{
				x[j]=(a*x[j-1]+b)%MOD;	
			}
        }
        if(j>T) {
        	break;
		}
    }
    for(i=2;i<=T;i+=2){
    	printf("%lld\n",x[i]);	
	}
}

