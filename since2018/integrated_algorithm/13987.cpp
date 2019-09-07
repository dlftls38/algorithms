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
	int a[6]={0};
	int b[6]={0};
	int i,j;
	for(i=0;i<6;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<6;i++){
		scanf("%d",&b[i]);
	}
	int child=0;
	int parent=0;
	for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			if(a[i]>b[j]){
				child++;
				parent++;
			}
			else if(a[i]==b[j]){
				
			}
			else{
				parent++;
			}
		}
	}
	printf("%.5f",1.0*child/parent);
}

