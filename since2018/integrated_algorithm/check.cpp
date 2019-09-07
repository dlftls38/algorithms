#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
int answer=10000000;
int check[1000001];
void recur(int n,int count){
   if(n==1){
      if(count<answer){
         answer=count;
      }
   }
   else{
      if(check[n]==0 || count<check[n]){
         check[n]=count;
         if(n%3==0)
            recur(n/3,count+1);
         if(n%2==0)
            recur(n/2,count+1);
         recur(n-1,count+1);
      }
   }
}
int main(){
   int n;
   scanf("%d",&n);
   recur(n,0);
   printf("%d",answer);
}
