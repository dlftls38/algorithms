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
int a[1000];
int main(){
	while(1){
		int N,T1,T2,T3;
		scanf("%d%d%d%d",&N,&T1,&T2,&T3);
		if(N==0 && T1==0 && T2==0 && T3==0){
			break;
		}
		int ans=N*4-1;
		 if(T2>T1){
            ans+=T2-T1;
        }
        else{
            ans+=N+T2-T1;
        }
        if(T3<T2){
            ans+=T2-T3;
        }
        else
            ans+=N+T2-T3;
		printf("%d\n",ans);
	}
}
