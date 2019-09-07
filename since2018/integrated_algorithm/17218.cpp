#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
string answer;
string a;
string b;
int len_a;
int len_b;
int len_answer;
void recur(int q,int w,string s,int len_s){

	if(len_s>len_answer){
		answer.clear();
		answer=s;
		len_answer=len_s;
	}
	for(int i=q;i<len_a;i++){
		for(int j=w;j<len_b;j++){
			if(a[i]==b[j]){
				recur(i+1,j+1,s+a[i],len_s+1);
			}
		}
	}
}
int main(){
	cin>>a>>b;
	len_a=a.length();
	len_b=b.length();
	int aa[41]={0};
	int bb[41]={0};
	int i,j;
	for(i=0;i<len_a;i++){
		for(j=0;j<len_b;j++){
			if(a[i]==b[j]){
				aa[i]=1;
				bb[j]=1;
			}
		}
	}
	string ta="";
	string tb="";
	for(i=0;i<len_a;i++){
		if(aa[i]==1){
			ta+=a[i];
		}
	}
	for(i=0;i<len_b;i++){
		if(bb[i]==1){
			tb+=b[i];
		}
	}
	a.clear();
	a=ta;
	b.clear();
	b=tb;
	len_a=a.length();
	len_b=b.length();
	printf("a=%s\nb=%s\n",a.c_str(),b.c_str());
	recur(0,0,"",0);
	printf("%s\n",answer.c_str());
}
