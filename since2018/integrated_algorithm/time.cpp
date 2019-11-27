#include <stdio.h>
int a[3], b[3];
main()
{
	scanf("%d:%d:%d", a, a+1, a+2);
	scanf("%d:%d:%d", b, b+1, b+2);
	int x=a[0]*3600+a[1]*60+a[2], y=b[0]*3600+b[1]*60+b[2];
	if(x>=y)y+=24*3600;
	int ans=y-x;
	printf("%02d:%02d:%02d", ans/3600, (ans%3600)/60, ans%60);
}
