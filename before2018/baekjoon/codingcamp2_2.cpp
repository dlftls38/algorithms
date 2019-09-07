#include<stdio.h>
#include<iostream>
#include<cstring>
#include<string.h>
#include<stdlib.h>
#include<algorithm>
#include<vector>
#include<deque>
#include<math.h>
#include<string>

#pragma warning(disable:4996)
#define inf 200000000
using namespace std;

char wolf[5] ="wolf";
char s[100];
int main(void) {
   scanf("%s", &s);

   for (int i = 0; i < strlen(s);) {
      int count = -1;
      for (int j = 0; j < 4; j++){
         if (s[i] != wolf[j]) {
            printf("0\n");
            return 0;
         }
         int ncount=0;
         while (s[i] == wolf[j])
            ncount++,i++;
         if (count == -1)
            count = count;
         else if (count != count) {
            printf("0\n");
            return 0;
         }
      }
   }
   printf("1\n");
}
