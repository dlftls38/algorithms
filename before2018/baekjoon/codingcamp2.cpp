#include <stdio.h>
#include <string.h>
int main(){
	char input[60]={0};
	scanf("%s",input);
	int len=strlen(input);
	int w_count=0;
	int now_count=0;
	char pre_alpha='w';
	int flag=0;
	for(int i=0;i<len;i++){
		if(input[i]=='w'){
			w_count++;
			if(now_count>0){
				flag=1;
			}
		}
		else if(input[i]=='o'){
			if(pre_alpha!='w'){
				flag=1;
			}
			now_count++;
			if(now_count==w_count){
				if(input[i+1]!='l'){
					flag=1;
				}
				else{
					pre_alpha='o';
					now_count=0;
				}
			}
		}
		else if(input[i]=='l'){
			if(pre_alpha!='o'){
				flag=1;
			}
			now_count++;
			if(now_count==w_count){
				if(input[i+1]!='f'){
					flag=1;
				}
				else{
					pre_alpha='l';
					now_count=0;
				}
			}
		}
		else if(input[i]=='f'){
			if(pre_alpha!='l'){
				flag=1;
			}
			now_count++;
			if(now_count==w_count){
				if(i==len-1){
				}
				else if(input[i+1]!='w'){
					flag=1;
				}
				else{
					pre_alpha='w';
					now_count=0;
					w_count=0;
				}
			}
		}
		else{
			flag=1;
		}
	}
	if(w_count!=now_count || flag==1){
		printf("0");
	}
	else{
		printf("1");
	}
}
