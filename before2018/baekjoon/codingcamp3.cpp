#include <stdio.h>
#include <vector>
using namespace std;
int main(){
    int n,s,t,v,k;
    vector<int> ar[100];
    scanf("%d%d", &n,&k);
    for(int i=0;i<k;i++){//데이터 입력
        scanf("%d %d %d",&s,&t,&v);
        ar[s].push_back(t);
        ar[s].push_back(v);
        ar[t].push_back(s);
        ar[t].push_back(v);
    }
    for(int i=0;i<n;i++)//모든 정점에서 갈 수 있는 길 순회
    {
        printf("시작 : %d ",i );
        for(int j=0;j<ar[i].size();j+=2)
            printf("-> 정점 %d 값 %d  ",ar[i][j],ar[i][j+1]);
        printf("\n");
    }
}
