#include <stdio.h>
#include <string.h>
int main(){
    int i,j,k;
    char a[50]={0};
    scanf("%s",a);
    int len=strlen(a);
    if(a[0]==48){
    	printf("0");
    	return 0;
	}
    for(i=0;i<len-1;i++){
		if((a[i]-48)>3 && a[i+1]==48){
			printf("0");
			return 0;
		}
	}
    for(i=0;i<len-1;i++){
		if(a[i]==48 && a[i+1]==48){
			printf("0");
			return 0;
		}
	}
    for(i=0;i<len;i++){
    	if(a[i]=='0'){
    		a[i]='z';
    		a[i-1]='z';
		}
	}
    int count=1;
    for(i=0;i<len-1;i++){
        if(((a[i]-48)*10 + a[i+1]-48)>=1 && ((a[i]-48)*10 + a[i+1]-48)<=34){
            count++;
        }
    }
    for(i=2;i<len/2+1;i++){
        for(j=0;j<len-1;j++){
            int ban=0;
            for(k=0;k<len-1;k++){
                if(ban==j){
                    break;
                }
                if(((a[k]-48)*10 + a[k+1]-48)>=1 && ((a[k]-48)*10 + a[k+1]-48)<=34){
                    ban++;
                }
            }
            int semicount=0;
            for(k=k;k<len-1;k++){
                if(semicount==i-1){
                    break;
                }
                if(((a[k]-48)*10 + a[k+1]-48)>=1 && ((a[k]-48)*10 + a[k+1]-48)<=34){
                    semicount++;
                    k++;
                }
            }
            if(semicount!=i-1){
                continue;
            }
            for(k=k;k<len-1;k++){
                if(((a[k]-48)*10 + a[k+1]-48)>=1 && ((a[k]-48)*10 + a[k+1]-48)<=34){
                    semicount++;
                }
            }
            if(semicount>=i){
                count+=semicount-i+1;
            }
        }
    }
    printf("%d",count);
}

