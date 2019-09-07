#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <deque>
using namespace std;
int main(){
	deque<int>dq;
	int n;
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++){
		char s[100]={0};
		scanf("%s",s);
		if(strcmp(s,"push_front")==0){
			int x;
			scanf("%d",&x);
			dq.push_front(x);
		}
		else if(strcmp(s,"push_back")==0){
			int x;
			scanf("%d",&x);
			dq.push_back(x);
		}
		else if(strcmp(s,"pop_front")==0){
			if(dq.empty()){
				printf("-1\n");
			}
			else{
				printf("%d\n",dq.front());
				dq.pop_front();
			}
		}
		else if(strcmp(s,"pop_back")==0){
			if(dq.empty()){
				printf("-1\n");
			}
			else{
				printf("%d\n",dq.back());
				dq.pop_back();
			}
		}
		else if(strcmp(s,"size")==0){
			printf("%d\n",dq.size());
		}
		else if(strcmp(s,"empty")==0){
			if(dq.empty()){
				printf("1\n");
			}
			else{
				printf("0\n");
			}
		}
		else if(strcmp(s,"front")==0){
			if(dq.empty()){
				printf("-1\n");
			}
			else{
				printf("%d\n",dq.front());
			}
		}
		else{
			if(dq.empty()){
				printf("-1\n");
			}
			else{
				printf("%d\n",dq.back());
			}
		}
	}
}
