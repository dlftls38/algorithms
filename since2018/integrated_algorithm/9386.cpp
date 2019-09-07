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
int main(){
	while(1){
		int n,m;
		scanf("%d%d",&n,&m);
		if(n==0 && m==0){
			break;
		}
		if(n>m){
			swap(n,m);
		}
		if(n==1){
			printf("0\n");
		}
		else if(n==2){
			printf("%d\n",(m-1)/2);
		}
		else if(n==3){
			printf("%d\n",(m-1)/2*2);
		}
		else if(n==4){
			printf("%d\n",m-1+(m-4)/2);
		}
		else if(n==5){
			printf("%d\n",4+(m-4)*2);
		}
		else if(n==6){
			printf("%d\n",(m-5)*2+8);
		}
		else if(n==7){
			if(m==7)
				printf("%d\n",15);
			else
				printf("%d\n",17);
		}
		else if(n==8){
			printf("%d\n",21);
		}
	}
}
