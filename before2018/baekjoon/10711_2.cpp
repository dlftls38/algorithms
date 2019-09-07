#include <stdio.h>
int a[1002][1002],b[1002][1002],q[1100000],q2[1100000],top,q3[1100000],q4[1100000],top2;
int main(){
    int h,w,i,j,count,day=0,p;
    char input[1001];
    scanf("%d%d",&h,&w);
    for(i=0;i<h+2;i++) a[i][0]=100;
    for(i=0;i<h+2;i++) a[i][w+1]=100;
    for(i=0;i<w+2;i++) a[0][i]=100;
    for(i=0;i<w+2;i++) a[h+1][i]=100;
    for(i=1;i<h+1;i++){
        scanf("%s",input);
        for(j=1;j<w+1;j++){
            if(input[j-1]!='.'){
                a[i][j]=input[j-1]-48;
                b[i][j]=a[i][j];
                if(input[j-1]-48!=9){
                    q[top]=i;
                    q2[top++]=j;    
                }
            }
            else{
            	a[i][j]=100;
			}
        }
    }
    while(1){
        count=1;
        p=0;
        for(i=0;i<top;i++){
        	if(a[q[i]][q2[i]]-(a[q[i]+1][q2[i]]+a[q[i]-1][q2[i]]+a[q[i]][q2[i]+1]+a[q[i]][q2[i]-1]+a[q[i]-1][q2[i]+1]+a[q[i]-1][q2[i]-1]+a[q[i]+1][q2[i]+1]+a[q[i]+1][q2[i]-1])/100<=0){
                count=0;
                b[q[i]][q2[i]]=100;
                q3[top2]=q[i];
                q4[top2++]=q2[i];
                p++;
            }
            else{
                q[i-p]=q[i];
                q2[i-p]=q2[i];
            }
        }
        top-=p;
        for(i=0;i<top2;i++){
            a[q3[i]][q4[i]]=b[q3[i]][q4[i]];
        }
        top2=0;
        if(count==1) break;
        else day++;
    }
    printf("%d",day);
}

