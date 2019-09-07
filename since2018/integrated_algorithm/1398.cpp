#include<iostream>
#include<math.h>
using namespace std;
long long ans;
int getlen(long long num){
    int len=0;
    while(num>0){
        num/=10;
        len++;
    }
    return len;
}
int c=0;
void dfs(long long cur,long long cnt){
	c++;
    if(cnt>ans || cur<0){
        return;
    }
    if(cur==0){
        ans=min(ans,cnt);
        return;
    }
    int len=getlen(cur);
    long long mod1=pow(10,len-1);
    long long mod2=pow(10,len-2);
    dfs(cur-(cur/mod1)*mod1,cnt+(cur/mod1));
    if(len%2==0){
        dfs(cur-25*mod2,cnt+1);
    }
}
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        long long n;
        ans = 987654321;
        scanf("%lld",&n);
        dfs(n,0);
        printf("%lld\n",ans);
    }
    printf("%d\n",c);
}

