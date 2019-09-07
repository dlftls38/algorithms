#include<cstdio>
 
int a[1000];
 
int main()
{
    long long n;
    int i,j;
	int x=0,k;
    scanf("%lld%d",&n,&k);
    while(n)
    {
        a[x++]=n%k;
        n/=k;
    }
    j=0;
    for(i=999;i>=1;i-=2)
    {
        if(a[i])j=1;
        if(j)a[i-1]=k-1;
    }
    for(i=1000;i;i-=2){
    	n=n*k+a[i-2];
	}
    printf("%lld",n+1);
}
