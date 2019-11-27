#include <bits/stdc++.h>
#define N 3005
#define M 15005
#define K 500005
#define pb push_back
using namespace std;
typedef pair<int,int>P;
int n,m;
vector<int>g[M];
vector<int>going[N];
int scc[M],visit[M],scc_c=1,v_c=1;
P order[M];
int dq[M],tp;bool appear[M];
int prefer[N][2],talk[N][4],ans[N];
int go(int x,int y)
{
    if(y==prefer[x][0])
        return (x-1)*4+1;
    return (x-1)*4+3;
}
int rev(int x){
    if(x%2)
        return x+1;
    return x-1;
}
void push(int x,int y){
    g[rev(x)].pb(y);
    g[rev(y)].pb(x);
}
int dfs(int curr)
{
    dq[tp++]=curr;
    visit[curr]=v_c++;
    int res=visit[curr];
    for(auto &it : g[curr]){
        if(!visit[it])
            res=min(res,dfs(it));
        else if(!scc[it])
            res=min(res,visit[it]);
    }
    if(res==visit[curr]){
        while(tp!=0){
            int top=dq[tp-1];
            tp--;
            scc[top]=scc_c;
            if(top==curr)
                break;
        }
        scc_c++;
    }
    return res;
}
void tarjan()
{
    for(int i=1;i<=4*n;i++)
        if(!visit[i])
            dfs(i);
}
int main()
{
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++)
        scanf("%d %d %d %d",&talk[i][0],&talk[i][1],&talk[i][2],&talk[i][3]);
    for(int i=1;i<=n;i++){
        int a,b;
        scanf("%d %d",&a,&b);
        prefer[i][0]=a;
        prefer[i][1]=b;
        push(go(i,a),go(i,b));
        going[a].pb(i);
        if(a!=b){
            push(rev(go(i,a)),rev(go(i,b)));
            going[b].pb(i);
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=0;j<going[i].size();j++){
            for(int k=j+1;k<going[i].size();k++){
                int it1=going[i][j],it2=going[i][k];
                push(rev(go(it1,i)),rev(go(it2,i)));
            }
        }
    }
    for(int i=1;i<=m;i++){
        int v1,v2,tp;
        scanf("%d %d %d",&v1,&v2,&tp);
        tp--;
        for(auto &it1 : going[v1]){
            for(auto &it2 : going[v2]){
                if(it1==it2)
                    continue;
                if(talk[it1][tp]!=talk[it2][tp]){
                    push(rev(go(it1,v1)),rev(go(it2,v2)));
                }
            }
        }
    }
    tarjan();
    for(int i=1;i<=4*n;i+=2){
        if(scc[i]==scc[i+1]){
            printf("NO");
            return 0;
        }
    }
    puts("YES");
    for(int i=1;i<=4*n;i+=2){
        int j=i+1;
        if(scc[i]<scc[j]){
            if(i%4==1){
                ans[prefer[(i-1)/4+1][0]]=(i-1)/4+1;
            }
            else{
                ans[prefer[(i-3)/4+1][1]]=(i-3)/4+1;
            }
        }
    }
    for(int i=1;i<=n;i++)
        printf("%d ",ans[i]);
    return 0;
}
