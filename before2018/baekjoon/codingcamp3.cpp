#include <stdio.h>
#include <vector>
using namespace std;
int main(){
    int n,s,t,v,k;
    vector<int> ar[100];
    scanf("%d%d", &n,&k);
    for(int i=0;i<k;i++){//������ �Է�
        scanf("%d %d %d",&s,&t,&v);
        ar[s].push_back(t);
        ar[s].push_back(v);
        ar[t].push_back(s);
        ar[t].push_back(v);
    }
    for(int i=0;i<n;i++)//��� �������� �� �� �ִ� �� ��ȸ
    {
        printf("���� : %d ",i );
        for(int j=0;j<ar[i].size();j+=2)
            printf("-> ���� %d �� %d  ",ar[i][j],ar[i][j+1]);
        printf("\n");
    }
}
