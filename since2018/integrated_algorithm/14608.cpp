#include <cstdio>

#include <cmath>

using namespace std;

int N, M, a, b;

double s[11];

double x;

double sum = 0.0;

double isPossible(double mid) {

    double ret = 0.0;

    for (int m = 0;m < M;m++) {

        double tmp = 0.0;

        for (int n = N;n >= 0;n--) {

            tmp += s[n] * (pow(a + m*x + mid, n));

        }

        tmp *= x;

        ret += tmp;

    }

    return fabs(sum - ret);

}

int main() {

    scanf("%d", &N);

    for (int n = N;n >= 0;n--) scanf("%lf", &s[n]);

    scanf("%d%d%d", &a, &b, &M);

 

    for (int n = N;n >= 0;n--) sum += s[n] * (pow(b, n + 1) - pow(a, n + 1)) / (double)(n + 1);

 

    int cnt = 0;

    bool flag = false;

    x = (b - a) / (double)M;

    double l = 0.0, r = x;

    while (1) {

        double ll = (2 * l + r) / 3., rr = (l + 2 * r) / 3.;

        double g1 = isPossible(ll), g2 = isPossible(rr);

        if (g1 < g2) r = rr;

        else l = ll;

        if (++cnt == 10000) {

            if (fabs(g1 - g2) <= 1e-4) flag = true;

            break;

        }

    }

    if (flag) printf("%lf\n", l);

    else printf("-1\n");

    return 0;

}

