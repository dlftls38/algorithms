#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
string s,t;
int len_s;
int len_t;
vector<int>pi(1000001,0);
int restore[1000001];
int tail;
char answer[1000001];
void getPi(){ 
	int j=0;
	for(int i = 1; i< len_t ; i++){ 
		while(j > 0 && t[i] != t[j]) 
			j = pi[j-1]; 
		if(t[i] == t[j]) 
			pi[i] = ++j; 
	} 
}
void kmp(){ 
	int j =0; 
	for(int i = 0; i < len_s; i++){	
		answer[tail]=s[i];
		restore[tail++]=j;
		while(j>0 && s[i] != t[j]) {
			j = pi[j-1];
		}
		if(s[i] == t[j]){
			if(j==len_t-1){	
				j=restore[tail-=len_t];
			}
			else{ 
				j++; 
			} 
		} 
	} 
}
int main(){
	cin>>s;
	cin>>t;
	len_s=s.length();
	len_t=t.length();
	getPi();
	kmp();
	answer[tail]='\0';
	printf("%s",answer);
}
