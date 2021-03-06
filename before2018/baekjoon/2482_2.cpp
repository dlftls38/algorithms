#include <stdio.h>
#define D 1000000003
 
int main()
{
    int n, k;
    int i, j;
    int s[1000][500] = {{0}};
    scanf("%d %d", &n, &k);
    if (2 * k > n)
        printf( "0");
    else
    {
        s[0][0] = s[1][0] = s[1][1] = 1;
        for (i = 2; i <= n; i++)
        {
            for (j = 0; j <= i / 2 + 3; j++)
            {
                if (j == 0)
                    s[i][j] = 1;
                else
                    s[i][j] = (s[i - 1][j] + s[i - 2][j - 1]) % D;
            }
        }
    }
    printf("%d", (s[n - 3][k - 1] + s[n - 1][k]) % D);
    return 0;
}

