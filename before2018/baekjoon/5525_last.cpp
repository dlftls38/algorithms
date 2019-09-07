#include <stdio.h>
#include <string.h>
char a[1000010];
int main(){
    int n,len,count=0,result=0,i;
    scanf("%d%d%s",&n,&len,a);
    for(i=0;i<len;i++){
    	if(count==0){
    		if(strncmp(&a[i],"IOI",3)==0){
    			i+=2;
    			count++;
			}
		}
		else{
			if(strncmp(&a[i],"OI",2)==0){
				count++;
				i++;
			}
			else{
				count=0;
				i--;
			}
		}
		if(count>=n){
			result++;
		}
    }
    printf("%d",result);
}

