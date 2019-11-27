#include<stdio.h>
#include<map>
#include<stack>
#include<queue>
#include<limits.h>
#include<vector>
#include<set>
#include<string>
#include<string.h>
#include<algorithm>
#define MOD 16769023
using namespace std;
int main(){
	int n,w,arr[15],coin = 0, pivot = 0;
	scanf("%d%d",&n,&w);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n-1;i++){
		if(arr[i] > arr[i+1]){
			if(coin){
				w += coin*arr[i];
				coin = 0;
			}
		}
		else if(arr[i] < arr[i+1]){
			if(!coin){
				coin = w/arr[i];
				w -= coin*arr[i];
				pivot = arr[i];
			}
		}
	}
	if(arr[n-1] > pivot) w += arr[n-1]*coin;
	else if(coin) w+= pivot*coin;
	printf("w:%d\n",w);
}
