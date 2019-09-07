#include<stdio.h>
int data[20];
int main(){
    int n,s,sum=0,cnt=0;
    scanf("%d%d",&n,&s);
    for(int i=0;i<n;i++)
        scanf("%d",&data[i]);
    int q=(1<<(n));
    for(int i=1;i<=q-1;i++){
        for(int j=0;j<n;j++){
            if((i & (1<<j))==(1<<j)){
                sum+=data[j];
            }
        }
        if(sum==s) cnt+=1;
        sum=0;
    }
    printf("%d",cnt);
    return 0;
}

