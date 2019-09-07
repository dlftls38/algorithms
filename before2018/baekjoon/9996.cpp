#include <stdio.h>
#include <string.h>
int main(){
	int n,i,j,z,len,len2,answer,k;
	char a[110][110]={0};
	char b[110]={0};
	scanf("%d",&n);
	scanf("%s",b);
	len2=strlen(b);
	for(i=0;i<n;i++){
		scanf("%s",a[i]);
		len=strlen(a[i]);
		answer=0;
		k=1;
		if(len2-1>len){
			answer=1;
		}
		else{
			for(j=0;j<len2;j++){
				if(b[j]==42){
					for(z=len-1;z>j+len-len2;z--){
						if(a[i][z]==b[len2-k]){
						}
						else{
							answer=1;
							break;
						}
						k++;
					}
					break;
				}
				else{
					if(a[i][j]==b[j]){
					}
					else{
						answer=1;
						break;
					}
				}
			}
		}
		if(answer==0){
			printf("DA\n");
		}
		else{
			printf("NE\n");
		}
	}
}
