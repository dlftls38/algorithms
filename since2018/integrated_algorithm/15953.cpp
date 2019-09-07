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
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b;
		scanf("%d%d",&a,&b);
		int i,j;
		int ans=0;
		if(a==1){
			ans+=5000000;
		}
		else if(a>=2 && a<=3){
			ans+=3000000;
		}
		else if(a>=4 && a<=6){
			ans+=2000000;
		}
		else if(a>=7 && a<=10){
			ans+=500000;
		}
		else if(a>=11 && a<=15){
			ans+=300000;
		}
		else if(a>=16 && a<=21){
			ans+=100000;
		}
		if(b==1){
			ans+=5120000;
		}
		else if(b>=2 && b<=3){
			ans+=2560000;
		}
		else if(b>=4 && b<=7){
			ans+=1280000;
		}
		else if(b>=8 && b<=15){
			ans+=640000;
		}
		else if(b>=16 && b<=31){
			ans+=320000;
		}
		printf("%d\n",ans);
	}
}
