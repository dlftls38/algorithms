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
	int n,l;
	scanf("%d%d",&n,&l);
	int i,j;
	int cnt=0;
	for(i=1;cnt<n;i++){
		int temp=i;
		int check=0;
		while(temp>0){
			if(temp%10==l){
				check=1;
			}
			temp/=10;
		}
		if(check==0){
			cnt++;
		}
	}
	printf("%d",i-1);
}
