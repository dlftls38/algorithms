#include <stdio.h>
#include <string.h>
using namespace std;
int main(){
	char a[5005]={0};
	int count[5005]={0};
	int answer=0;
	int f_count=0;
	scanf("%s",a);
	int len=strlen(a);
	int end=3;
	count[0]=1;
	if(a[0]=='f') f_count++;
	for(int i=1;i<len;i++){
		if(a[i]=='f') f_count++;
		else{
			if(a[i-1]=='f'){
				for(int j=end;j>-1;j--){
					if(count[j]>0){
						count[j+f_count]=count[j];
						count[j]=0;
					}
				}
				end+=f_count;
				f_count=0;
			}
			for(int j=2;j<end;j++){
				for(int k=1;k<j;k++){
					count[k]+=count[j];
				}
			}
		}
	}
	for(int i=1;i<end;i++){
		answer+=count[i];
	}
	if(answer==0) answer=1;
	printf("%d",answer);
}
