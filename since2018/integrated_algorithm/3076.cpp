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
	int r,c,a,b;
	scanf("%d%d%d%d",&r,&c,&a,&b);
	int i,j,k,l;
	for(i=0;i<r;i++){
		for(j=0;j<a;j++){
			for(k=0;k<c;k++){
				for(l=0;l<b;l++){
					if((i+k)%2==0)
						printf("X");
					else
						printf(".");
				}
			}
			printf("\n");
		}
	}
}
