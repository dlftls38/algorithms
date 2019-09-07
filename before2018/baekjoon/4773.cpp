#include <stdio.h>
#include <string.h>
int main(){
	int stack[100]={0};
	int top=0;
	while(1){
		int i;
		char a[20]={0};
		if(scanf("%s",a)==EOF){
			break;
		}
		int lena=strlen(a);
		if(strcmp(a,"+")==0 || strcmp(a,"-")==0 || strcmp(a,"*")==0 || strcmp(a,"/")==0){
			if(top<2){
				printf("stack underflow\n");
			}
			else{
				if(strcmp(a,"+")==0 ){
					stack[top-2]=stack[top-1]+stack[top-2];
					stack[top-1]=0;
					top--;
				}
				else if(strcmp(a,"-")==0 ){
					stack[top-2]=stack[top-2]-stack[top-1];
					stack[top-1]=0;
					top--;
				}
				else if(strcmp(a,"/")==0 ){
					if(stack[top-1]==0){
						printf("division by zero exception\n");
						top--;
					}
					else{
						stack[top-2]=stack[top-2]/stack[top-1];
						stack[top-1]=0;
						top--;
					}
				}
				else{
					stack[top-2]=stack[top-1]*stack[top-2];
					stack[top-1]=0;
					top--;
				}
			}
		}
		else if(strcmp(a,"=")==0){
			if(top==0){
				printf("stack underflow\n");
			}
			else{
				if(stack[top-1]<=0 || stack[top-1]>4999){
					printf("out of range exception\n");
				}
				else{
					int u=1000;
					int something=stack[top-1];
					for(i=0;i<4;i++){
						if(something/u>0 && u==1000){
							if(something/u==4){
								printf("MMMM");
							}
							if(something/u==3){
								printf("MMM");
							}
							if(something/u==2){
								printf("MM");
							}
							if(something/u==1){
								printf("M");
							}
						}
						if(something/u>0 && u==100){
							if(something/u==9){
								printf("CM");
							}
							if(something/u==8){
								printf("DCCC");
							}
							if(something/u==7){
								printf("DCC");
							}
							if(something/u==6){
								printf("DC");
							}
							if(something/u==5){
								printf("D");
							}
							if(something/u==4){
								printf("CD");
							}
							if(something/u==3){
								printf("CCC");
							}
							if(something/u==2){
								printf("CC");
							}
							if(something/u==1){
								printf("C");
							}
						}
						if(something/u>0 && u==10){
							if(something/u==9){
								printf("XC");
							}
							if(something/u==8){
								printf("LXXX");
							}
							if(something/u==7){
								printf("LXX");
							}
							if(something/u==6){
								printf("LX");
							}
							if(something/u==5){
								printf("L");
							}
							if(something/u==4){
								printf("XL");
							}
							if(something/u==3){
								printf("XXX");
							}
							if(something/u==2){
								printf("XX");
							}
							if(something/u==1){
								printf("X");
							}
						}
						if(something/u>0 && u==1){
							if(something/u==9){
								printf("IX");
							}
							if(something/u==8){
								printf("VIII");
							}
							if(something/u==7){
								printf("VII");
							}
							if(something/u==6){
								printf("VI");
							}
							if(something/u==5){
								printf("V");
							}
							if(something/u==4){
								printf("IV");
							}
							if(something/u==3){
								printf("III");
							}
							if(something/u==2){
								printf("II");
							}
							if(something/u==1){
								printf("I");
							}
						}
						something%=u;
						u/=10;
					}
					printf("\n");
				}
			}
		}
		else{
			for(i=0;i<lena;i++){
				if(strncmp(&a[i],"IV",2)==0){
					stack[top]+=4;
					i++;
				}
				else if(strncmp(&a[i],"IX",2)==0){
					stack[top]+=9;
					i++;
				}
				else if(strncmp(&a[i],"XL",2)==0){
					stack[top]+=40;
					i++;
				}
				else if(strncmp(&a[i],"XC",2)==0){
					stack[top]+=90;
					i++;
				}
				else if(strncmp(&a[i],"CD",2)==0){
					stack[top]+=400;
					i++;
				}
				else if(strncmp(&a[i],"CM",2)==0){
					stack[top]+=900;
					i++;
				}
				else if(a[i]=='I'){
					stack[top]+=1;
				}
				else if(a[i]=='V'){
					stack[top]+=5;
				}
				else if(a[i]=='X'){
					stack[top]+=10;
				}
				else if(a[i]=='L'){
					stack[top]+=50;
				}
				else if(a[i]=='C'){
					stack[top]+=100;
				}
				else if(a[i]=='D'){
					stack[top]+=500;
				}
				else if(a[i]=='M'){
					stack[top]+=1000;
				}
			}
			top++;
		}
	}
}
