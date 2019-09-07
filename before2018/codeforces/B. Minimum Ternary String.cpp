#include <stdio.h>
#include <string.h>
using namespace std;
int main(){
	char a[100001]={0};
	scanf("%s",a);
	int len=strlen(a);
	int i,j;
	int position=len;
	for(i=len-2;i>-1;i--){
		if(a[i]=='2'){
			int count=0;
			for(j=i+1;j<position;j++){
				if(a[j]=='1'){
					count++;
					a[j]='0';
				}
			}	
			for(j=i;j<i+count;j++){
				a[j]='1';
			}	
			a[j]='2';
			position=j;
		}
	}
	int count0=0;
	int count1=0;
	for(i=0;i<len;i++){
		if(a[i]=='2'){
			for(j=0;j<count0;j++){
				printf("0");
			}
			count0=0;
			for(j=0;j<count1;j++){
				printf("1");
			}
			count1=0;
			printf("2");
		}
		else if(a[i]=='1'){
			count1++;
		}
		else{
			count0++;
		}
	}
	for(j=0;j<count0;j++){
		printf("0");
	}
	for(j=0;j<count1;j++){
		printf("1");
	}
}
//220102
//122002
//2000001100012
//1200000100012
//1112000000002
