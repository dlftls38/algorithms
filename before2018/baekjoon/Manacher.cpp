#include <stdio.h>
#include <string.h>
int min(int a,int b){
	if(a<b){
		return a;
	}
	else{
		return b;
	}
}
int main(){
	printf("%d",min(1,2));
	int t;
	scanf("%d",&t);
	while(t--){
		char S[500000]={0};
		int A[500000]={0};
		scanf("%s",S);
		int n=strlen(S);
		int R = -1;
		int p = -1;
		int i;
		int max=0;
		for(i=0;i<n;i++){
			if(i <= R)	A[i] = min(A[2*p - i], R-i);
			else	A[i] = 0;
			while (S[i-A[i]-1] == S[i+A[i]+1])
				A[i] = A[i] + 1;
			if (i+A[i] > R)
				R = i+A[i], p = i;
			if(max<A[i]) max = A[i];
		}
		printf("%d\n",max);
	}
}
