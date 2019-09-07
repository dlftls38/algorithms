#include <stdio.h>
#include <string.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int k,i,len;
		char a[81]={0};
		scanf("%d%s",&k,a);
		len=strlen(a);
		for(i=0;i<len;i++){
			if(i!=k-1) printf("%c",a[i]);
		}
		printf("\n");
	}
}
