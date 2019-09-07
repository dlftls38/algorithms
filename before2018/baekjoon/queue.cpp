#include "stdio.h"
#include "string.h"
 
int queue[5] = {0,};
int num=0;
 
void put();
void get();
int getCheck();
void queue_print();
 
void main () {
    char option[5] = "";
    
    while (1) {
        printf("option : ");
        scanf("%s",option);
        
        if (!strcmp(option,"exit")) {
            break;
        } else if (!strcmp(option,"put")) {
            put();
        } else if (!strcmp(option,"get")) {
            get();
        } else {
            printf("plz input put or get\n\n");
        }
    }
}
 
void put() {
    int input;
    
    if (num==5) {
        printf("queue overflow\n\n");
    } else {
        printf("input : ");
        scanf("%d",&input);
        
        queue[num]=input;
        num++;
        
        queue_print();
    }
}
 
void get() {
    int tmp = queue[1];
    int i;
    
    if (getCheck()==1) {
        printf("queue underflow\n\n");
    } else {
        printf("get : %d\n",queue[0]);
        
        for (i=1; i<4; i++) {
            queue[i]=queue[i+1];
        }
        queue[0]=tmp;
        queue[4]=0;
        
        queue_print();
    }
}
 
int getCheck() {
    int i, vcheck=0;
    
    for (i=0; i<5; i++) {
        if (queue[i]==0) {
            vcheck++;
        }
    }
    
    if (vcheck==5) {
        return 1;
    } else {
        return 0;
    }
}
 
void queue_print() {
    int i;
    for (i=0; i<5; i++) {
        printf("%-3d",queue[i]);
    }
    printf("\n\n");
 
}
