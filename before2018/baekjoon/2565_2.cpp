#include <stdio.h>
int n;
int a[510]={0};
int b[510]={0};
int max;
int main(){
    int i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        int q,w;
        scanf("%d%d",&q,&w);
        a[q]=w;
        b[q]=1;
    }
    for(i=0;i<510;i++){
        for(j=i+1;j<510;j++){
            if(a[i]<a[j]){
                if(b[j]<b[i]+1){
                    b[j]=b[i]+1;
                }
            }
        }
    }
    for(i=0;i<510;i++){
        if(b[i]>max) max=b[i];
    }
	if(max/2<n){
		max=n-max;	
	}
    printf("%d",max);
}

