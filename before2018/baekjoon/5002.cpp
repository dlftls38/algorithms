#include <stdio.h>
#include <string.h>
int abs(int a,int b){
	if(a-b>=0){
		return a-b;
	}
	else{
		return b-a;
	}
}
int main(){
	int n;
	char a[102]={0};
	scanf("%d%s",&n,a);
	int len = strlen(a);
	int i;
	char one=a[0],two=a[1];
	int M=0;
	int W=0;
	for(i=0;i<len;i++){
		if(M>W){
			if(two=='W'){
				W++;
			}
			else if(one=='W'){
				W++;
				one = two;
			}
			else if(two=='M'){
				M++;
			}
			else if(one=='M'){
				M++;
				one=two;
			}
			two=a[i+2];
		}
		else{
			if(two=='M'){
				M++;
			}
			else if(one=='M'){
				M++;
				one=two;
			}
			else if(two=='W'){
				W++;
			}
			else if(one=='W'){
				W++;
				one = two;
			}
			two=a[i+2];
		}
		if(abs(M,W)>n){
			printf("%d",M+W-1);
			return 0;
		}
	}
	printf("%d",M+W);
}
