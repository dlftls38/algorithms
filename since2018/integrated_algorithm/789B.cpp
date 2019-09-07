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
int a[100000];
int main(){
	int b,q,l,m;
	scanf("%d%d%d%d",&b,&q,&l,&m);
	int i,j;
	for(i=0;i<m;i++){
		scanf("%d",&a[i]);
	}
	vector<int>v;
	if(b==0 || q==1 || q==-1){
		while(abs(b)<=l && v.size()<2){
			v.push_back(b);
			b*=q;
		}
		int cnt=0;
		for(i=0;i<m;i++){
			for(j=0;j<v.size();j++){
				if(a[i]==v[j]){
					cnt++;
				}
			}
		}
		if(cnt==v.size()){
			printf("0");
		}
		else{
			printf("inf");
		}
	}
	else if(q==0){
		while(abs(b)<=l && v.size()<2){
			v.push_back(b);
			b*=q;
		}
		int cnt1=0;
		int cnt2=0;
		for(i=0;i<m;i++){
			for(j=0;j<v.size();j++){
				if(a[i]==v[j]){
					if(j==0)
						cnt1++;
					else
						cnt2++;
				}
			}
		}
		if(v.size()==2){
			if(cnt1==0 && cnt2==0){
				printf("inf");
			}
			else if(cnt1==0 && cnt2==1){
				printf("1");
			}
			else if(cnt1==1 && cnt2==0){
				printf("inf");
			}
			else{
				printf("0");
			}
		}
		else if(v.size()==1){
			if(cnt1==1){
				printf("0");
			}
			else{
				printf("1");
			}
		}
		else{
			printf("0");
		}
	}
	else{
		while(abs(b)<=l){
			v.push_back(b);
			if(1LL*b*q>l){
				break;
			}
			b*=q;
		}
		int cnt=0;
		int size=v.size();
		for(i=0;i<size;i++){
			for(j=0;j<m;j++){
				if(v[i]==a[j]){
					cnt++;
				}
			}
		}
		printf("%d",size-cnt);
	}
	
}
