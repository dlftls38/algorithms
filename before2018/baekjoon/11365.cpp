#include <stdio.h>
#include <string.h>
int main(){
	
	char a[1000][1000]={0};
	int i,j,k,len;
	char b[10]={0};
	for(i=0;i<999;i++){
		
		for(j=0;j<999;j++){
			
			scanf("%c",&a[i][j]);
			if(a[i][j]==10){
				
				break;
			}
		}
		if(a[i][0]=='E' && a[i][1]=='N' && a[i][2]=='D' && a[i][3]==10){
			k=i;
			break;
		}
	}
	for(i=0;i<k;i++){
		
		len=strlen(a[i]);
		for(j=len-2;j>-1;j--){
			
			printf("%c",a[i][j]);
		}
		printf("\n");
	}
}
