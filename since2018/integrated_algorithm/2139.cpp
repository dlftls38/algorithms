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
	while(1){
		int d,m,y;
		scanf("%d%d%d",&d,&m,&y);
		if(d+m+y==0)break;
		int yoon=0;
		if(y%4==0){
			if(y%100==0){
				if(y%400==0){
					yoon=1;
				}
			}
			else{
				yoon=1;
			}
		}
		int ans=d;
		for(int i=1;i<m;i++){
			if(i==2){
				ans+=28+yoon;
			}
			else if(i==4 || i==6 || i==9 || i==11){
				ans+=30;
			}
			else{
				ans+=31;
			}
		}
		printf("%d\n",ans);
	}
}
