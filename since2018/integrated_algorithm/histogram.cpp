#include <cstdio>
#include <algorithm>
using namespace std;
 
int N, H[100000];
 
// ���� �������� ������׷� [s, e) ������ Ǫ�� �Լ�
int histogram(int s, int e){
    if(s == e) return 0; // base case: ���� 0
    if(s+1 == e) return H[s]; // base case: ���� 1
 
    int mid = (s+e)/2;
    int result = max(histogram(s, mid), histogram(mid, e)); // �� ���� ������ �ִ�
 
    // ���� ������ ���� �ִ� ���� O(e-s)�� ã��
    int w = 1, h = H[mid], l = mid, r = mid;
    while(r-l+1 < e-s){
        int p = l>s ? min(h, H[l-1]) : -1; // �������� Ȯ������ ����� ����
        int q = r<e-1 ? min(h, H[r+1]) : -1; // ���������� Ȯ������ ����� ����
        // �� ����(����) ���̸� ���� ������ Ȯ��
        if(p >= q){
            h = p;
            l--;
        }
        else{
            h = q;
            r++;
        }
        // �ִ� ����
        result = max(result, ++w*h);
    }
    return result;
}
 
int main(){
    scanf("%d", &N);
    for(int i=0; i<N; i++)
        scanf("%d", H+i);
    printf("%d\n", histogram(0, N));
}
