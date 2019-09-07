#include <stdio.h>
int answer=10000;
int n;
int real[100]={0};
int p=0;
int a[510]={0};
int sum=0;
int count[510]={0};
int something[510][100]={0};
int top[510]={0};
void re(int index,int result){
    int j;
    int back_countindex;
    if(index>0){
        result++;
        for(j=0;j<top[index];j++){
            count[something[index][j]]--;
        }
        back_countindex=count[index];
        count[index]=0;
    }
    int max=0;
    for(j=0;j<n;j++){
        if(max<count[real[j]]){
            max=count[real[j]];
        }
    }
    if(max==0){
        if(answer>result){
            answer=result;  
        }
        for(j=0;j<top[index];j++){
            count[something[index][j]]++;
        }
        count[index]=back_countindex;
    }
    else{
        for(j=0;j<n;j++){
            if(count[real[j]]==max){
                re(real[j],result);
            }
        }
        if(index>0){
            for(j=0;j<top[index];j++){
                count[something[index][j]]++;
            }
            count[index]=back_countindex;
        }
    }
}
int main(){
    int i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        int q,w;
        scanf("%d%d",&q,&w);
        a[q]=w;
        real[p]=q;
        p++;
    }
    for(i=2;i<510;i++){
        for(j=1;j<i;j++){
            if(a[i]<a[j] && a[i]!=0){
            	sum+=2;
                count[i]++;
                count[j]++;
                something[i][top[i]]=j;
                top[i]++;
                something[j][top[j]]=i;
                top[j]++;
            }
        }
    }
    re(0,0);
    printf("%d",answer);
}

