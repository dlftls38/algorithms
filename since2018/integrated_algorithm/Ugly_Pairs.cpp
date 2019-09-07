#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
int abs(int a, int b){
	if(a-b<0){
		return b-a;
	}
	else{
		return a-b;
	}
}
int main(){
	int t;
	scanf("%d",&t);
	int i,j,k;
	for(i=0;i<t;i++){
		char a[1000]={0};
		scanf("%s",a);
		int b[1000]={0};
		for(j=0;j<strlen(a);j++){
			b[a[j]]++;
		}
		int count=0;
		for(j=97;j<123;j++){
			if(b[j]>0){
				count++;
			}
		}
		char c[1000]={0};
		int left=200;
		for(j=97;j<123;j++){
			if(b[j]>0){
				for(k=0;k<b[j];k++){
					c[left--]=j;
				}
				b[j]=0;
				break;
			}
		}
		int right=201;
		int p=0;
		for(int l=0;l<count;l++){
			for(j=97;j<123;j++){
				if(b[j]>0){
					if(abs(j,c[left+1])!=1){
						for(k=0;k<b[j];k++){
							c[left--]=j;
						}
						b[j]=0;
					}
					else if(abs(j,c[right-1])!=1){
						for(k=0;k<b[j];k++){
							c[right++]=j;
						}
						b[j]=0;
					}
				}
			}
		}
		int spare=0;
		for(j=97;j<123;j++){
			if(b[j]>0){
				spare++;
			}
		}
		if(spare>0){
			printf("No answer\n");
		}
		else{
			for(j=left+1;j<right;j++){
				printf("%c",c[j]);
			}
			printf("\n");
		}
	}
}
