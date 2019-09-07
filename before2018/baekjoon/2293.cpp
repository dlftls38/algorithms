#include <stdio.h>
int main(){
    int n,k,p;
    long long a[200]={0},b[40000]={0},c[40000]={0};
    int i,j,z;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        for(j=1;j<k+1;j++){
            if(b[j]>0){
            	p=0;
                for(z=j;z<k+1;z+=a[i]){
                	p++;
                	if(c[z+a[i]]==0 || c[z+a[i]]>b[j]+p){
                		c[z+a[i]]=b[j]+p;
					}
                }
            }
        }
        p=0;
        for(j=a[i];j<k+1;j+=a[i]){
        	p++;
        	if(c[j]==0 || c[j]>p){
        		c[j]=p;
			}
        }
        for(j=1;j<k+1;j++){
            b[j]=c[j];
        }
    }
    if(b[k]==0){
    	printf("-1");
	}
	else{
		printf("%lld",b[k]);
	}
}

