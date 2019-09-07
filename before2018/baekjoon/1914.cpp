#include <stdio.h>
 #include <string.h>

void hanoi(int from, int temp, int to, int n);

int count = 0, a[2][1100000],top,num;

int main()
 {
    int i;

    scanf("%d", &num);

   hanoi(1,2,3, num);
   printf("%d\n",count);
   if(num<=20){
	   for(i=0;i<top;i++){
	   		printf("%d %d\n",a[0][i],a[1][i]);
	   }
	}
 }

void hanoi(int from, int temp, int to, int n)
 {
    if (n==1) {
       count++;
       if(num<=20) a[0][top]=from;
       if(num<=20) a[1][top++]=to;
    }
    else {
       hanoi(from, to, temp, n-1);
       count++;
       if(num<=20) a[0][top]=from;
       if(num<=20) a[1][top++]=to;
       hanoi(temp, from, to, n-1);
   }
 }
