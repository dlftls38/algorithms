#include <stdio.h>
#include <string.h>
#include <math.h>
#include <set>
#include <string>
#include <iostream>
char a[210];
int stack[210];
int real[210];
int count=0;
using namespace std;
int main(){
    std::set<string> sat;
    scanf("%s",a);
    int i,j,k;
    int len = strlen(a);
    int top=0;
    for(i=0;i<len;i++){
    	stack[i]=-1;
        if(a[i]=='('){
            stack[i]=count;
            real[top++]=count++;
        }
        else if(a[i]==')'){
            stack[i]=real[top-1];
            top--;
        }
    }
    int q=1<<count;
    for(i=1;i<q;i++){
        int you[12]={0};
        int k=i;
        for(j=9;j>-1;j--){
            if((1<<j)<=k){
                k-=1<<j;
                you[j]=1;
            }
        }
        std::string w = "";
        for(j=0;j<len;j++){
            if(you[stack[j]]==1){
                 
            }
            else{
                w+=a[j];
            }
        }
        sat.insert(w);
    }
    set<string>::iterator pos;
    for(pos=sat.begin();pos!=sat.end();++pos){
        //if(pos!=sat.begin()){
            cout<<*pos<<"\n";           
        //}
    }
}

