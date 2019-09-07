#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
string t,p;
long long len_t,len_p;
vector<long long>pi(1000001,0);
vector<long long>ans_pos;
void getPi(){ 
	int j=0;
	for(int i = 1; i< len_p ; i++){ 
		while(j > 0 && p[i] != p[j]) 
			j = pi[j-1]; 
		if(p[i] == p[j]) 
			pi[i] = ++j; 
	} 
}
void kmp(){ 
	int j =0; 
	for(int i = 0; i < len_t; i++){
		while(j>0 && t[i] != p[j]) {
			j = pi[j-1];
		}
		if(t[i] == p[j]){
			if(j==len_p-1){
				j=pi[j];
				ans_pos.push_back(i-len_p+2);
			}
			else{ 
				j++; 
			} 
		} 
	} 
}
int main(){
	cin>>t;
	p=t;
	len_t=t.length();
	len_p=p.length();
	long long k;
	scanf("%lld",&k);
	getPi();
	kmp();
	long long max_len=pi[len_t-1];
	long long ans=1LL*len_t*k;
	ans-=1LL*(1LL*k-1)*1LL*(1LL*max_len);
	printf("%lld",ans);
}
