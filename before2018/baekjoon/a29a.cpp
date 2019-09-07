#include<stdio.h>
 
int main(){
    
    int a,b,c,d,i,j,m,n,mm,nn;
    int k=0;
    
    scanf("%d%d%d%d",&a,&b,&c,&d);
    
    if(a>c){
        
        m=c;
        mm=a;    
    }
    
    else {
        
        m=a;
        mm=c;
    }
    
    if(b>d){
        
        n=d;
        nn=b;    
    }
    
    else {
        
        n=b;
        nn=d;
    }
        
    for(i=m; i<mm+1; i++){
        
        for(j=n; j<nn+1; j++){
            
            if((c-a)*(j-b)==(d-b)*(i-a)){
                
                k+=1;
            }
        }
    }
    
    printf("%d",k);
}
