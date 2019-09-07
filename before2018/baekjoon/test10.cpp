#include <stdio.h>
 
char a[1100000];
char b[1100000];
 
int main(){
    int n,m,i,p=0,k=0;
     
    scanf("%d%d",&n,&m);
    scanf("%s",a);
     
    for(i=0;i<2*n+1;i++){
         
        if(i%2==0){
            b[i]='I';
        }
        else{
            b[i]='O';
        }
    }
     
    for(i=0;i<m;i++){
        if(a[i]==b[k]){
             
            k++;
        }
        else{
            if(k==1){
            }
            else{
                k=0;
            }
        }
        if(k==2*n+1){
            p++;
            while(1){
                if(a[i+1]=='O' && a[i+2]=='I'){
                     
                    p++;
                    i+=2;
                }
                else{
                    break;
                }
            }
            k=0;
        }
    }
    printf("%d",p);
}

