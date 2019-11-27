#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long LL;
typedef pair<LL, LL> PAIR;
#define X first
#define Y second
#define MAX 1000000000000ll;
PAIR point[500004];
int n;
 
LL square(LL a) {
    LL ans = a*a;
    return ans;
}
LL dist(PAIR a, PAIR b) {
    LL ans = square(a.X - b.X) + square(a.Y - b.Y);
    return ans;
}
bool op(PAIR a, PAIR b) {
    if (a.Y != b.Y)
        return a.Y < b.Y;
    else
        return a.X < b.X;
}
LL solve(PAIR* point, int st, int en) { // point[st:en]������ ����� �� ���� �Ÿ��� ������ ��ȯ�ϴ� �Լ�
    if (en - st == 1)
        return MAX;
    int mid = (st + en) / 2;
    LL d = min(solve(point, st, mid), solve(point, mid, en));
    vector<PAIR> V; // point[st:en]���� ���ؼ����κ��� �Ÿ��� sqrt(d) ���Ϸ� ������ ������ ���� vector
    LL sep = point[mid].X; // x = point[mid].X�� ���ؼ�
    for (int i = st; i < en; i++) {
        if (square(point[i].X - sep) <= d)
            V.push_back(point[i]);
    }
    sort(V.begin(), V.end(), op); // y��ǥ �������� ����
    for (int i = 0; i < V.size(); i++) {
        for (int j = i + 1; j < V.size() && j < i + 7; j++) { // ������ 6���� ���� ����
            d = min(d, dist(V[i], V[j])); // d�� ����
        }
    }
    return d;
}
 
int main(void) {
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%lld %lld", &point[i].X, &point[i].Y);
    sort(point, point + n);
    printf("%lld\n", solve(point, 0, n));
 
}
