#include <stdio.h>
 
int a=0;
int    b=1;
int    c=1;
 
int fib(int n){
    int k=1;
    
    if (n-k>0){
        
        b+=a;
        a=c;
        c=b;
        return fib(n-1);
    }
    
    else {
        
        return b;
    }
}
 
int main(){
    
    int n;
    
    scanf("%d",&n);
    
    printf("%d", fib(n));
}
