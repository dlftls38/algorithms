#include <stdio.h>
#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <limits.h>
#include <functional>
#include <math.h>
#include <fstream>
using namespace std;
int main(){
	int n,x;
	scanf("%d%d",&n,&x);
	int k=n%6;
	int i,j;
	int ans;
	for(i=0;i<3;i++){
		int c=i;
		for(j=1;j<=k;j++){
			if(j%2==0){
				if(c==1){
					c=2;
				}
				else if(c==2){
					c=1;
				}
			}
			else{
				if(c==1){
					c=0;
				}
				else if(c==0){
					c=1;
				}
			}
		}
		if(c==x){
				ans=i;
			}
	}
	printf("%d",ans);
}
