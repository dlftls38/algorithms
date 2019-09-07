#include <stdio.h>
#include <string.h>
int main(){
    int n,i,j,z=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
    	char a[100001]={0},b[100001]={0};
        scanf("%s",a);
        int len=strlen(a),t=0;
        for(j=0;j<len;j++){
        	b[t++]=a[j];
        	if(t-2>=0 && b[t-2]==b[t-1]) t-=2;
        }
        if(t==0) z++;
    }
    printf("%d",z);
}

