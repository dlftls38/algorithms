#include <stdio.h>
int main(){
	int t,i,b[8]={0};
	scanf("%d",&t);
	while(t--){
		char a[41]={0};
		scanf("%s",a);
		for(i=0;i<38;i++){
			if(a[i]=='T' && a[i+1]=='T' && a[i+2]=='T') b[0]++;
			if(a[i]=='T' && a[i+1]=='T' && a[i+2]=='H') b[1]++;
			if(a[i]=='T' && a[i+1]=='H' && a[i+2]=='T') b[2]++;
			if(a[i]=='T' && a[i+1]=='H' && a[i+2]=='H') b[3]++;
			if(a[i]=='H' && a[i+1]=='T' && a[i+2]=='T') b[4]++;
			if(a[i]=='H' && a[i+1]=='T' && a[i+2]=='H') b[5]++;
			if(a[i]=='H' && a[i+1]=='H' && a[i+2]=='T') b[6]++;
			if(a[i]=='H' && a[i+1]=='H' && a[i+2]=='H') b[7]++;
		}
		for(i=0;i<8;i++){
			printf("%d ",b[i]);
			b[i]=0;
		}
		printf("\n");
	}
}
