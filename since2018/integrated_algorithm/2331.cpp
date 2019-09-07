#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
	int a,p;
	scanf("%d%d",&a,&p);
	int q[300000]={0};
	vector<int>v;
	v.push_back(a);
	q[a]++;
	while(1){
		int x=0;
		while(1){
			int k=a%10;
			int sum=1;
			for(int i=0;i<p;i++){
				sum*=k;
			}
			x+=sum;
			a/=10;
			if(a==0){
				break;
			}
		}
		v.push_back(x);
		q[x]++;
		a=x;
		if(q[x]>1){
			break;
		}
	}
	int count=0;
	int i;
	for(i=0;;i++){
		if(q[v[i]]==1){
			count++;
		}
		else{
			break;
		}
	}
	printf("%d",count);
}
