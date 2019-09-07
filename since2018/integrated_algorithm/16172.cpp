#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
string t,p;
int len_t,len_p;
vector<int>pi(200001,0);
vector<int>ans_pos;
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
	string tt;
	cin>>tt>>p;
	int len_tt=tt.length();
	int i,j;
	for(i=0;i<len_tt;i++){
		if(tt[i]>'9'){
			t+=tt[i];
		}
	}
	len_t=t.length();
	len_p=p.length();
	getPi();
	kmp();
	printf("%d",ans_pos.size()>0?1:0);
}
