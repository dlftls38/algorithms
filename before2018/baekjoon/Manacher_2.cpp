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
	int t;
	scanf("%d",&t);
	while(t--){
		char s[600000]={0};
		char w[600000]={0};
		int q[600000]={0};
		scanf("%s",w);
		int i,j;
		int n=strlen(w);
		for(i=0,j=0;j<n;i++,j++){
			s[i++]='#';
			s[i]=w[j];
		}
		s[i]='#';
		n=strlen(s);
		int r = -1;
		int p = -1;
		int ma=0;
		for(i=0;i<n;i++){
			if(i <= r){
				q[i] = min(q[2*p - i], r-i);
			}
			else{
				q[i] = 0;
			}
			while(i-q[i]-1 >= 0 && i+q[i]+1 <= n && s[i-q[i]-1] == s[i+q[i]+1]){
				q[i] = q[i] + 1;
			}
			if (i+q[i] > r){
				r = i+q[i];
				p = i;
			}
			if(ma<q[i]){
				ma = q[i];
			}
		}
		printf("%d\n",ma);
	}
}
