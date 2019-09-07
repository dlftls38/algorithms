#include <stdio.h>
int main(){
	int t,n,i;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		char a[2][101]={0};
		scanf("%s",a[0]);
		scanf("%s",a[1]);
		int count=0;
		for(i=0;i<n;i++){
			if(a[1][i]=='*'){
				if(i-1>=0) a[0][i-1]--;
				if(i+1<n) a[0][i+1]--;
				a[0][i]--;
				count++;
			}
		}
		while(1){
			for(i=0;i<n;i++){
				int count2=0;
				if(i-1>=0 && a[1][i-1]=='#') count2++;
				if(i+1<n && a[1][i+1]=='#') count2++;
				if(a[1][i]=='#') count2++;
				if(count2==a[0][i]-48){
					count+=count2;
					if(i-1>=0 && a[1][i-1]=='#'){
						a[1][i-1]='*';
						if(i-2>=0) a[0][i-2]--;
						a[0][i-1]--;
						a[0][i]--;
					}
					if(i+1<n && a[1][i+1]=='#'){
						a[1][i+1]='*';
						a[0][i]--;
						a[0][i+1]--;
						if(i+2<n) a[0][i+2]--;
					}
					if(a[1][i]=='#'){
						a[1][i]='*';
						a[0][i]--;
						if(i-1>=0) a[0][i-1]--;
						if(i+1<n) a[0][i+1]--;	
					}
				}
			}
			int count3=0;
			for(i=0;i<n;i++){
				count3+=a[0][i]-48;
			}
			if(count3==0) break;
		}
		printf("%d\n",count);
	}
}
