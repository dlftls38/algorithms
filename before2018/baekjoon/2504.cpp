#include <stdio.h>
#include <string.h>
int main(){
	char a[31]={0};
	scanf("%s",a);
	int stack[31]={0};
	int i,j,k;
	int top=0;
	int len=strlen(a);
	int flag=0;
	for(i=0;i<len;i++){
		if(a[i]=='('){
			stack[top++]=1;
		}
		if(a[i]=='['){
			stack[top++]=2;
		}
		if(a[i]==')'){
			if(top>0 && stack[top-1]==1){
				stack[--top]=0;
			}
			else{
				flag=1;
			}
		}
		if(a[i]==']'){
			if(top>0 && stack[top-1]==2){
				stack[--top]=0;
			}
			else{
				flag=1;
			}
		}
	}
	if(top>0){
		flag=1;
	}
	if(flag==1){
		printf("0");
	}
	else{
		int count[31]={0};
		int number[31]={0};
		int q=1;
		for(i=0;i<len;i++){
			if(a[i]==')'){
				number[i]=q;
				for(j=i-1;j>-1;j--){
					if(a[j]=='(' && number[j]==0){
						number[j]=q++;
						break;
					}
				}
			}
			if(a[i]==']'){
				number[i]=q;
				for(j=i-1;j>-1;j--){
					if(a[j]=='[' && number[j]==0){
						number[j]=q++;
						break;
					}
				}
			}
		}
		for(i=0;i<len;i++){
			if(a[i]==')'){
				if(count[i-1]>0){
					count[i]=count[i-1]*2;
				}
				else{
					count[i]=2;
				}
				count[i-1]=0;
				for(j=i-1;j>-1;j--){
					if(number[i]==number[j]){	
						break;
					}
				}
				for(j=j-1;j>-1;j--){
					if(a[j]=='(' || a[j]=='['){
						break;
					}
					count[i]+=count[j];
					count[j]=0;
					break;
				}
			}
			if(a[i]==']'){
				if(count[i-1]>0){
					count[i]=count[i-1]*3;
				}
				else{
					count[i]=3;
				}
				count[i-1]=0;
				for(j=i-1;j>-1;j--){
					if(number[i]==number[j]){	
						break;
					}
				}
				for(j=j-1;j>-1;j--){
					if(a[j]=='(' || a[j]=='['){
						break;
					}
					count[i]+=count[j];
					count[j]=0;
					break;
				}
			}
		}
		printf("%d",count[len-1]);
	}
}
