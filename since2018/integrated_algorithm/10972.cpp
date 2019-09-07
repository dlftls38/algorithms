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
using namespace std;
int a[10000];
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	next_permutation(a,a+n);
	int check=0;
	int k=1;
	for(i=0;i<n;i++){
		if(a[i]==k++){
			
		}
		else{
			check=1;
		}
	}
	if(check==0){
		printf("-1");
		return 0;
	}
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
