#include <cstdio>
int main()
{
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		int n;
		scanf("%d",&n);
		if(n==1){
			printf("0\n");
		}
		else if(n%2==0){
			printf("%d\n", n/2);
		}
		else{
			printf("%d\n", n);
		}
	}
	return 0;
}
