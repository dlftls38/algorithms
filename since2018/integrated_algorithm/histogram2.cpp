#include <cstdio>
#include <stack>
using namespace std;
int h[100000];
int main() {
    int n;
    scanf("%d",&n);
    for (int i=0; i<n; i++) {
        scanf("%d",&h[i]);
    }
    stack<int> s;
    int ans = 0;
    for (int i=0; i<=n; i++) {
        while(!s.empty() && h[s.top()] > h[i]) {
            int height = h[s.top()];
            s.pop();
            int width = i;
            if (!s.empty()) {
                width = (i - s.top() - 1);
            }
            if (ans < width*height) {
                ans = width*height;
            }
            printf("%d %d\n",height,width);
        }
        s.push(i);
    }
    printf("%d",ans);
}
