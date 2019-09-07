#include <stdio.h>
char a[1100000];
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,len,check=0,count=0,result=0,i;
		scanf("%d%d%s",&n,&len,a);
		for(i=0;i<len-2;i++){
			if(check==1){
				if(a[i]=='O' && a[i+1]=='I'){
					count++;
					if(count==n){
						result++;
						count--;
					}
					i++;
				}
				else{
					count=0;
					check=0;
					i--;
				}
			}
			if(a[i]=='I'){
				check=1;
			}
		}
		printf("%d\n",result);
	}
}
