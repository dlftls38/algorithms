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
	int r,b;
	scanf("%d%d",&r,&b);
	int i,j;
	for(i=1;i<=b;i++){
		if(b%i==0){
			int row=b/i;
			int column=i;
			if(r==row*2+column*2+4){
				printf("%d %d",row+2,column+2);
				break;
			}
		}
	}
}
