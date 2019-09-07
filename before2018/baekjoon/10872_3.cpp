#include <stdio.h>
 
int fac(int n)
{
    int k = 0;
    if(n == 1)
        return 1;
     
    k = n * fac(n - 1);
    return k;
}
 
int main(void)
{
    int n = 0;
    int result = 0;
 
    scanf("%d", &n);
    result = fac(n);
 
    printf("%d \n", result);
    return 0;
}

