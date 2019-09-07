#include <stdio.h>
#include <string.h>
int main(){
	char a[1000001]={0};
	scanf("%s",a);
	int i;
	int count=0;
	int n=strlen(a);
	for(i=0;i<n;i++){
		if((a[i]-48)%3==0){
			count++;
		}
		else if((a[i+1]-48)%3==0){
			continue;
		}
		else if((a[i]-48+a[i+1]-48)%3==0){
			i++;
			count++;
		}
		else if((a[i]-48+a[i+1]-48+a[i+2]-48)%3==0){
			i+=2;
			count++;
		}
	}
	printf("%d",count);
}
