#include <stdio.h>
#include <string.h>
int main(){
    int i,j,n,k,a[130]={0},count=0,len,rep,right,z,check,rep2,max=0;
    char word[50][16];
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++) scanf("%s",word[i]);
    for(i=97;i<97+k;i++) a[i]=1;
    a[123]=1;
    right=97+k-1;
    if(k>0){
        while(1){
            count=0;
            for(i=0;i<n;i++){
                rep=0;
                len =strlen(word[i]);
                if(len==8) count++;
                else{
                    for(j=4;j<len-4;j++){
                        if(a[word[i][j]]>0) rep++;
                        else break;
                    }
                    if(rep==len-8) count++;
                }
            }
            if(max<count) max=count;
            z=0;
            for(i=122;i>122-k;i--){
                if(a[i]>0) z++;
            }
            if(z==k) break;
            rep2=0;
            if(a[right+1]>0){
                for(i=right;i>96;i--){
                    if(a[i]>0){
                        a[i]=0;
                        rep2++;
                    }
                    else{
                        check=i;
                        break;
                    }
                }
                for(i=check;i>96;i--){
                    if(a[i]==1){
                        check=i;
                        break;
                    }
                }
                a[check++]=0;
                for(i=check;i<check+rep2+1;i++) a[i]=1;
                right=i-1;
            }
            else{
                a[right++]=0;
                a[right]=1;
            }
        }
         
    }
    else{
        for(i=0;i<n;i++){
            if(strlen(word[i])==8) max++;
        }
    }
    printf("%d",max);
}

