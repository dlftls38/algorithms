#include <stdio.h>
int main(){
	int n;
	char a[200001]={0};
	scanf("%d",&n);
	scanf("%s",a);
	int count=0;
	for(int i=0;i<n;i++){
		if(a[i]>a[i+1] && count==0){
			count=1;
		}
		else{
			printf("%c",a[i]);
		}
	}
}
