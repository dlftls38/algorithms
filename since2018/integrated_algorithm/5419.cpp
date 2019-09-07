#include <cstdio>
#include <algorithm>
using namespace std;
const int SIZE = 1<<18; // 75000*2 �̻�
typedef pair<int, int> P;
 
// ���׸�Ʈ Ʈ�� ����ü
struct SegTree{
    int arr[SIZE];
    SegTree(){ fill(arr, arr+SIZE, 0); }
    // n��° ���� ��带 1 ������Ŵ
    void inc(int n){
        n += SIZE/2;
        while(n > 0){
            arr[n]++;
            n /= 2;
        }
    }
    // ���� [s, e)�� ��
    int sum(int s, int e){ return sum(s, e, 1, 0, SIZE/2); }
    int sum(int s, int e, int node, int ns, int ne){
        if(e <= ns || ne <= s) return 0;
        if(s <= ns && ne <= e) return arr[node];
        int mid = (ns+ne)/2;
        return sum(s, e, node*2, ns, mid) + sum(s, e, node*2+1, mid, ne);
    }
};
 
int main(){
    int T;
    scanf("%d", &T);
    for(int t=0; t<T; t++){
        SegTree ST;
        int N, range = 0;
        P p[75000];
        scanf("%d", &N);
        for(int i=0; i<N; i++){
            int x, y;
            scanf("%d %d", &x, &y);
            p[i] = P(x, y);
        }
 
        // ������ y��ǥ ������ ����
        sort(p, p+N, [](P &a, P &b){
            return a.second < b.second;
        });
        // ���� ���еǴ� y��ǥ ������ ���� y��ǥ �缳��
        int newY[75000];
        for(int i=0; i<N; i++){
            if(i>0 && p[i].second != p[i-1].second) range++;
            newY[i] = range;
        }
        for(int i=0; i<N; i++)
            p[i].second = newY[i];
        // ������ �ٽ� x��ǥ ������, x��ǥ�� ���ٸ� y��ǥ�� �۾����� ������ ����
        sort(p, p+N, [](P &a, P &b){
            if(a.first == b.first) return a.second > b.second;
            return a.first < b.first;
        });
 
        // ������ ���ʴ�� �����鼭 �� ������ ������ �� �ִ� �� ���� ����
        long long result = 0;
        for(int i=0; i<N; i++){
            result += ST.sum(p[i].second, SIZE/2);
            ST.inc(p[i].second);
        }
        // ��� ���
        printf("%lld\n", result);
    }
}
