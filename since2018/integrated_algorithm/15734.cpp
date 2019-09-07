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
int a[1000];
int main(){
	int l,r,a;
	scanf("%d%d%d",&l,&r,&a);
	while(a>0){
		if(l<r){
			l++;
			a--;
		}
		else if(l>r){
			r++;
			a--;
		}
		else{
			if(a>1){
				l++;
				r++;
				a-=2;
			}
			else{
				a=0;
			}
		}
	}
	l=min(l,r);
	r=min(l,r);
	printf("%d",l+r);
}
