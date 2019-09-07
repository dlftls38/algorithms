#include <stdio.h>

int main(){
    
    int a;
    while(1){
        a=getchar();
        if(a==-1){
            break;
        }
        else{
            putchar(a);
        }
    }
    
}
