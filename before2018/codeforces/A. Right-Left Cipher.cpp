#include <stdio.h>
#include <string.h>
using namespace std;
int main(){
	char a[60];
	char b[60]={0};
	int tail=0;
	scanf("%s",a);
	int len=strlen(a);
	if(len%2==1){
		int end=len-1;
		int start=0;
		while(1){
			b[tail++]=a[start];
			if(start==end){
				break;
			}
			start++;
			b[tail++]=a[end];
			if(start==end){
				break;
			}
			end--;
		}
	}
	else{
		int start=len-1;
		int end=0;
		while(1){
			b[tail++]=a[start];
			if(start==end){
				break;
			}
			start--;
			b[tail++]=a[end];
			if(start==end){
				break;
			}
			end++;
			if(start==end){
				break;
			}
		}
	}
	for(int i=tail-1;i>-1;i--){
		printf("%c",b[i]);
	}
}
