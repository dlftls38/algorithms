#include <stdio.h>
#include <string.h>
int main(){
	char a[300001]={0};
	char b[300001]={0};
	int n;
	scanf("%d%s",&n,a);
	strcpy(b,a);
	int f[10]={0};
	int i,j,k;
	for(i=1;i<10;i++){
		scanf("%d",&f[i]);
	}
	for(j=0;j<n;j++){
		if(a[j]-48<f[a[j]-48]){
			for(k=j;k<n;k++){
				if(a[k]-48<=f[a[k]-48]){
					b[k]=f[a[k]-48]+48;
				}
				else{
					break;
				}
			}
			break;
		}
	}
	printf("%s",b);
}