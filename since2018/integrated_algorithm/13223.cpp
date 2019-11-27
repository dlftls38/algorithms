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
#define INF 987654321
#define MAX_VALUE 1000000000
#define MOD 1000000009
#define pi 3.141592
using namespace std;
typedef pair<int,int> pii;
pii dir[] = { {1,0},{-1,0},{0,1},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1} };
int main(){
	string current;
	string input;
	cin>>current>>input;
	int i;
	for(i=0;i<8;i++){
		if(i!=2 && i!=5){
			input[i]-=current[i]-'0';
		}
	}
	for(i=7;i>=0;i--){
		if(i!=2 && i!=5){
			if(i==7){
				if(input[i]<'0'){
					input[i]+=10;
					input[i-1]--;
				}
			}
			else if(i==6){
				if(input[i]<'0'){
					input[i]+=6;
					input[i-2]--;
				}
			}
			else if(i==4){
				if(input[i]<'0'){
					input[i]+=10;
					input[i-1]--;
				}
			}
			else if(i==3){
				if(input[i]<'0'){
					input[i]+=6;
					input[i-2]--;
				}
			}
			else if(i==1){
				if(input[i]<'0'){
					if(input[i-1]>'0'){
						input[i-1]--;
						input[i]+=10;	
					}
					else{
						input[i-1]+=2;
						input[i]+=4;
						if(input[i]<'0'){
							input[i]+=10;
							input[i-1]--;
						}
					}
				}
			}
			else if(i==0){
				if(input[i]<'0'){
					input[i]+=2;
					input[i+1]+=4;
				}
				if(input[i+1]>'9'){
					input[i+1]-=10;
					input[i]++;
				}
				if(input[i]>'2' || input[i]=='2' && input[i+1]>='4'){
					input[i]-=2;
					input[i+1]-=4;
					if(input[i+1]<'0'){
						input[i+1]+=10;
						input[i]--;
					}
				}
			}
		}
	}
	if(input.compare("00:00:00")==0){
		printf("24:00:00");
	}
	else{
		printf("%s",input.c_str());	
	}
}
