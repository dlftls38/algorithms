#include <stdio.h>
int k;
int hanoi(int n,int a, int b, int c){
 if (n==1){
 	printf("%d %d\n", a, c);
 }
 else{
  hanoi((n - 1),a,c,b);
  printf("%d %d\n",a,c);
  hanoi((n - 1),b,a,c);
    }return 0;
}
int main(){
 scanf("%d",&k);
 unsigned long long su=1;
 for(int i=0;i<k;i++){
  su=su*2;
 }
 su-=1;
 printf("%llu\n",su);
 if(k<=20)hanoi(k,k-2,k-1,k);
}

