#include <stdio.h>
#include <string.h>
int main(){
	int a[21]={0};
	int n;
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++){
		char input[11]={0};
		int x;
		scanf("%s%d",input,&x);
		if(strcmp(input,"add")==0){
			a[x]=1;
		}
		else if(strcmp(input,"remove")==0){
			a[x]=0;
		}
		else if(strcmp(input,"check")==0){
			printf("%d\n",a[x]);
		}
		else if(strcmp(input,"toggle")==0){
			if(a[x]==1){
				a[x]=0;
			}
			else{
				a[x]=1;
			}			
		}
		else if(strcmp(input,"all")==0){
			for(int j=1;j<21;j++){
				a[j]=1;
			}
		}
		else{
			for(int j=1;j<21;j++){
				a[j]=0;
			}
		}
	}
}
