#include <cstdio>
#include <stack>
using namespace std;
int h[100001];
long long psum[100001];
int main() {
    int n;
    scanf("%d",&n);
    for (int i=1; i<=n; i++) {
        scanf("%d",&h[i]);
        psum[i]=h[i]+psum[i-1];
    }
    stack<int> s;
    long long ans = 0;
    for (int i=1; i<=n+1; i++) {
        while(!s.empty() && h[s.top()] > h[i]) {
            int height = h[s.top()];
            s.pop();
            long long width = psum[i-1];
            if (!s.empty()) {
            	width-=psum[s.top()];
            }
            if (ans < width*height) {
                ans = width*height;
            }
            //printf("%d %d\n",height,width);
        }
        s.push(i);
    }
    printf("%lld",ans);
}
