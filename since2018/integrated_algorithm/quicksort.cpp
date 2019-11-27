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
#include <time.h>
#define INF 987654321
#define MAX_VALUE 1000000000
#define MOD 1000000009
#define pi 3.141592
using namespace std;
typedef pair<int,int> pii;
pii dir[] = { {1,0},{-1,0},{0,1},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1} };
int S[10000];
int cnt,cases;
void partitions (int low, int high, int &pivotpoint) {
	int i, j;
	int pivotitem; // Choose first item for pivotitem
	int pivotpos;
	if(cases==0){
		pivotpos=low;
		pivotitem = S[pivotpos];
	}
	else if(cases==1){
		pivotpos=rand()%(high-low+1)+low;
		pivotitem = S[pivotpos];
	}
	else{
		pair<int,int>median[3];
		median[0]={S[low],low};
		median[1]={S[(low+high)/2],(low+high)/2};
		median[2]={S[high],high};
		sort(median,median+3);
		pivotpos=median[1].second;
		pivotitem = S[pivotpos];
	}
	swap(S[pivotpos],S[low]);
	j = low;
	for(i = low + 1; i <= high; i++){
		if (S[i] < pivotitem) {
			j++;
			swap(S[i],S[j]);
		}
		cnt++;	
	}
	pivotpoint = j;
	swap(S[low],S[pivotpoint]);
}
void quicksort (int low, int high) {
	int pivotpoint;
	if (high > low) {
		partitions(low,high,pivotpoint);
		quicksort(low,pivotpoint-1);
		quicksort(pivotpoint+1,high);
	}
}
int main(){
	srand((unsigned int)time(NULL));
	int i;
	int n;
	cin>>n;
	int SS[10000];
//	for(i=0;i<n;i+=2){
//		SS[i]=i/2+1;
//		SS[i+1]=n-i/2;
//	}
//	long long rounds=1234567;
//	rounds=1LL*rand()*rand()%rounds;
//	for(i=0;i<rounds;i++){
//		next_permutation(SS,SS+n/2);
//		next_permutation(SS+n/2,SS+n);
//	}	
	for(i=0;i<n;i++){
		SS[i]=rand()%10000;
	}
//	for(i=0;i<n;i++){
//		SS[i]=n-i;
//	}
	for(cases=0;cases<3;cases++){
		cnt=0;
		memcpy(S,SS,sizeof(SS));
//		printf("\n");
//		for(i=0;i<n;i++){
//			printf("%d ",S[i]);
//		}
		printf("\n");
		quicksort(0,n-1);
		printf("\n");
//		for(i=0;i<n;i++){
//			printf("%d ",S[i]);
//		}
		printf("\n%d\n",cnt);	
		printf("\n");
	}
}
