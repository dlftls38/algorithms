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
int a[100];
int b[100];
int gcd(int a, int b){
	while(b!=0){
		int r = a%b;
		a= b;
		b= r;
	}
	return a;
}
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	reverse(a,a+n);
	for(i=0;i<n-1;i++){
		b[i]=a[i]-a[i+1];
	}
	int ans=gcd(b[0],b[1]);
	for(i=1;i<n-1;i++){
		int temp=gcd(b[i],b[i+1]);
		ans=gcd(ans,temp);
	}
	set<int>s;
	for(i=2;i*i<ans;i++){
		if(ans%i==0){
			s.insert(i);
			s.insert(ans/i);
		}
	}
	if(ans%(i*i)==0){
		s.insert(i);
	}
	for(auto it : s){
		printf("%d ",it);
	}
	printf("%d",ans);
}
