#include "stdio.h"
#include "string.h"
 
void pop();
void push();
void stack_print();
 
int stack[5] = {0,};
int num=0;
 
void main () {
    char option[5]="";
    
    while (1) {
        printf("option : ");
        scanf("%s",option);
        
        if (!strcmp(option, "pop")) {
            pop();
        } else if(!strcmp(option, "push")) {
            push();
        } else if(!strcmp(option, "exit")) {
            break;
        } else {
            printf("plz input pop or push");
            continue;
        }
    }
    
}
 
void pop() {
    if (num==0) {
        printf("there is no value\n\n");
    } else {
        stack[num-1]=0;
        num--;
        
        stack_print();
    }
}
 
void push() {
    int input;
    if (num==5) {
        printf("stack overflow\n\n");
    } else {
        printf("input : ");
        scanf("%d",&input);
        
        stack[num]=input;
        num++;
        
        stack_print();
    }
}
 
void stack_print() {
    int i;
    
    printf("stack : \n");
    for (i=num-1; i>=0; i--) {
        printf("stack[%d] : %d\n",i,stack[i]);
    }
    printf("\n");
 
}
