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
	int n;
	scanf("%d",&n);
	char a[11]={0};
	scanf("%s",a);
	int i,j;
	int direction=0;
	int cur=0;
	int ram=0;
	for(i=0;i<n;i++){
		if(cur==2){
			break;
		}
		if(a[i]=='P'){
			if(cur==1){
				ram=1;
			}
			if(direction==0){
				direction=1;
			}
			else{
				direction=0;
			}
		}
		else{
			cur++;
		}
	}
	if(cur<2){
		printf("0");
	}
	else if(ram==1){
		printf("6");
	}
	else{
		if(direction==0){
			printf("5");
		}
		else{
			printf("1");
		}
	}
}
