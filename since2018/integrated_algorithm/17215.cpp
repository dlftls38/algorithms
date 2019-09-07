#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
	char a[1000]={0};
	scanf("%s",a);
	int len=strlen(a);
	int i;
	int frame=1;
	int answer=0;
	int count=0;
	for(i=0;i<len;i++){
		if(a[i]>='1' && a[i]<='9'){
			answer+=a[i]-48;
			count++;
			if(count==2){
				count=0;
				frame++;
			}
		}
		else if(a[i]=='-'){
			count++;
			if(count==2){
				count=0;
				frame++;
			}
		}
		else if(a[i]=='P'){
			if(a[i-1]=='-'){
				answer+=10;
			}
			else{
				answer+=10-(a[i-1]-48);
			}
			if(frame<=9 && i+1<len){
				if(a[i+1]>='1' && a[i+1]<='9'){
					answer+=a[i+1]-48;
				}
				else if(a[i+1]=='S'){
					answer+=10;
				}
			}
			frame++;
			count=0;
		}
		else if(a[i]=='S'){
			answer+=10;
			if(frame<=9 && i+1<len){
				if(a[i+1]>='1' && a[i+1]<='9'){
					answer+=a[i+1]-48;
				}
				else if(a[i+1]=='S'){
					answer+=10;
				}
			}
			if(frame<=9 && i+2<len){
				if(a[i+2]>='1' && a[i+2]<='9'){
					answer+=a[i+2]-48;
				}
				else if(a[i+2]=='S'){
					answer+=10;
				}
				else if(a[i+2]=='P'){
					if(a[i+1]=='-'){
						answer+=10;
					}
					else{
						answer+=10-(a[i+1]-48);	
					}
				}
			}
			frame++;
			count=0;
		}
		//printf("what = %c answer = %d frame = %d\n",a[i],answer,frame);
	}
	printf("%d",answer);
}
