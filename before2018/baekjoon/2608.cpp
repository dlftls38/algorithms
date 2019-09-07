#include <stdio.h>
#include <string.h>
int main(){
	char a[20]={0};
	char b[20]={0};
	int i;
	scanf("%s%s",a,b);
	int lena=strlen(a);
	int lenb=strlen(b);
	int sum=0;
	int checka[20]={0};
	int checkb[20]={0};
	for(i=0;i<lena;i++){
		if(strncmp(&a[i],"IV",2)==0){
			sum+=4;
			checka[i]=1;
			checka[i+1]=1;
		}
		if(strncmp(&a[i],"IX",2)==0){
			sum+=9;
			checka[i]=1;
			checka[i+1]=1;
		}
		if(strncmp(&a[i],"XL",2)==0){
			sum+=40;
			checka[i]=1;
			checka[i+1]=1;
		}
		if(strncmp(&a[i],"XC",2)==0){
			sum+=90;
			checka[i]=1;
			checka[i+1]=1;
		}
		if(strncmp(&a[i],"CD",2)==0){
			sum+=400;
			checka[i]=1;
			checka[i+1]=1;
		}
		if(strncmp(&a[i],"CM",2)==0){
			sum+=900;
			checka[i]=1;
			checka[i+1]=1;
		}
		if(checka[i]==0 && a[i]=='I'){
			sum+=1;
			checka[i]=1;
		}
		if(checka[i]==0 && a[i]=='V'){
			sum+=5;
			checka[i]=1;
		}
		if(checka[i]==0 && a[i]=='X'){
			sum+=10;
			checka[i]=1;
		}
		if(checka[i]==0 && a[i]=='L'){
			sum+=50;
			checka[i]=1;
		}
		if(checka[i]==0 && a[i]=='C'){
			sum+=100;
			checka[i]=1;
		}
		if(checka[i]==0 && a[i]=='D'){
			sum+=500;
			checka[i]=1;
		}
		if(checka[i]==0 && a[i]=='M'){
			sum+=1000;
			checka[i]=1;
		}
	}
	for(i=0;i<lenb;i++){
		if(strncmp(&b[i],"IV",2)==0){
			sum+=4;
			checkb[i]=1;
			checkb[i+1]=1;
		}
		if(strncmp(&b[i],"IX",2)==0){
			sum+=9;
			checkb[i]=1;
			checkb[i+1]=1;
		}
		if(strncmp(&b[i],"XL",2)==0){
			sum+=40;
			checkb[i]=1;
			checkb[i+1]=1;
		}
		if(strncmp(&b[i],"XC",2)==0){
			sum+=90;
			checkb[i]=1;
			checkb[i+1]=1;
		}
		if(strncmp(&b[i],"CD",2)==0){
			sum+=400;
			checkb[i]=1;
			checkb[i+1]=1;
		}
		if(strncmp(&b[i],"CM",2)==0){
			sum+=900;
			checkb[i]=1;
			checkb[i+1]=1;
		}
		if(checkb[i]==0 && b[i]=='I'){
			sum+=1;
			checkb[i]=1;
		}
		if(checkb[i]==0 && b[i]=='V'){
			sum+=5;
			checkb[i]=1;
		}
		if(checkb[i]==0 && b[i]=='X'){
			sum+=10;
			checkb[i]=1;
		}
		if(checkb[i]==0 && b[i]=='L'){
			sum+=50;
			checkb[i]=1;
		}
		if(checkb[i]==0 && b[i]=='C'){
			sum+=100;
			checkb[i]=1;
		}
		if(checkb[i]==0 && b[i]=='D'){
			sum+=500;
			checkb[i]=1;
		}
		if(checkb[i]==0 && b[i]=='M'){
			sum+=1000;
			checkb[i]=1;
		}
	}
	printf("%d\n",sum);
	int u=1000;
	for(i=0;i<4;i++){
		if(sum/u>0 && u==1000){
			if(sum/u==4){
				printf("MMMM");
			}
			if(sum/u==3){
				printf("MMM");
			}
			if(sum/u==2){
				printf("MM");
			}
			if(sum/u==1){
				printf("M");
			}
		}
		if(sum/u>0 && u==100){
			if(sum/u==9){
				printf("CM");
			}
			if(sum/u==8){
				printf("DCCC");
			}
			if(sum/u==7){
				printf("DCC");
			}
			if(sum/u==6){
				printf("DC");
			}
			if(sum/u==5){
				printf("D");
			}
			if(sum/u==4){
				printf("CD");
			}
			if(sum/u==3){
				printf("CCC");
			}
			if(sum/u==2){
				printf("CC");
			}
			if(sum/u==1){
				printf("C");
			}
		}
		if(sum/u>0 && u==10){
			if(sum/u==9){
				printf("XC");
			}
			if(sum/u==8){
				printf("LXXX");
			}
			if(sum/u==7){
				printf("LXX");
			}
			if(sum/u==6){
				printf("LX");
			}
			if(sum/u==5){
				printf("L");
			}
			if(sum/u==4){
				printf("XL");
			}
			if(sum/u==3){
				printf("XXX");
			}
			if(sum/u==2){
				printf("XX");
			}
			if(sum/u==1){
				printf("X");
			}
		}
		if(sum/u>0 && u==1){
			if(sum/u==9){
				printf("IX");
			}
			if(sum/u==8){
				printf("VIII");
			}
			if(sum/u==7){
				printf("VII");
			}
			if(sum/u==6){
				printf("VI");
			}
			if(sum/u==5){
				printf("V");
			}
			if(sum/u==4){
				printf("IV");
			}
			if(sum/u==3){
				printf("III");
			}
			if(sum/u==2){
				printf("II");
			}
			if(sum/u==1){
				printf("I");
			}
		}
		sum%=u;
		u/=10;
	}
}
