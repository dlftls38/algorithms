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
		int n;
		scanf("%d",&n);
		if(n==0){
			break;
		}
		int i,j,k,l;
		int ans=0;
		for(i=0;i<190;i++){
			for(j=i;j<190;j++){
				for(k=j;k<190;k++){
					for(l=k;l<190;l++){
						if(i*i+j*j+k*k+l*l>n){
							break;
						}
						if(i*i+j*j+k*k+l*l==n){
							ans++;
						}
					}
				}
			}
		}
		printf("%d\n",ans);
	}
}
