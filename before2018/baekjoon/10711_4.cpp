#include <stdio.h>
int a[1002][1002],b[1002][1002],q[1100000],q2[1100000],top;
int main(){
    int h,w,i,j,count,day=0,p;
    char input[1001];
    scanf("%d%d",&h,&w);
    for(i=1;i<h+1;i++){
        scanf("%s",input);
        for(j=1;j<w+1;j++){
            if(input[j-1]!='.'){
                a[i][j]=input[j-1]-48;
                if(input[j-1]-48!=9){
                    q[top]=i;
                    q2[top++]=j;    
                }
            }
        }
    }
    while(1){
        count=1;
        p=0;
        for(i=0;i<top;i++){
        	if(a[q[i]+1][q2[i]]==0 && b[q[i]+1][q2[i]]>=a[q[i]][q2[i]])
        	    count=0;
                p++;
            }
        	else if(a[q[i]-1][q2[i]]==0 && b[q[i]-1][q2[i]]>=a[q[i]][q2[i]])
        	    count=0;
                p++;
            }
        	else if(a[q[i]][q2[i]+1]==0 && b[q[i]][q2[i]+1]>=a[q[i]][q2[i]])
        	    count=0;
                p++;
            }
        	else if(a[q[i]][q2[i]-1]==0 && b[q[i]][q2[i]-1]>=a[q[i]][q2[i]])
        	    count=0;
                p++;
            }
        	else if(a[q[i]+1][q2[i]+1]==0 && b[q[i]+1][q2[i]+1]>=a[q[i]][q2[i]])
        	    count=0;
                p++;
            }
        	else if(a[q[i]+1][q2[i]-1]==0 && b[q[i]+1][q2[i]-1]>=a[q[i]][q2[i]])
        	    count=0;
                p++;
            }
        	else if(a[q[i]-1][q2[i]+1]==0 && b[q[i]-1][q2[i]+1]>=a[q[i]][q2[i]])
        	    count=0;
                p++;
            }
        	else if(a[q[i]-1][q2[i]-1]==0 && b[q[i]-1][q2[i]-1]>=a[q[i]][q2[i]])
        	    count=0;
                p++;
            }
            else{
                q[i-p]=q[i];
                q2[i-p]=q2[i];
            }
        }
        top-=p;
        if(count==1) break;
        else day++;
    }
    printf("%d",day);
}

