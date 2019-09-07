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
using namespace std;
typedef pair<int,int> pii;
int main(){
	int tc;
	scanf("%d",&tc);
	while(tc--){
		int n;
		scanf("%d",&n);
		int i,j;
		int sum=0;
		int winner;
		int vote=0;
		int cnt=1;
		for(i=1;i<=n;i++){
			int temp;
			scanf("%d",&temp);
			sum+=temp;
			if(vote==temp){
				cnt++;
			}
			if(vote<temp){
				winner=i;
				vote=temp;
				cnt=1;
			}
		}
		if(cnt>1){
			printf("no winner\n");
		}
		else{
			if(vote*2>sum){
				printf("majority winner %d\n",winner);
			}
			else{
				printf("minority winner %d\n",winner);
			}
		}
	}
}
