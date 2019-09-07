#include <stdio.h>
#include <string.h>
#include <assert.h>

int bitcount(long long x) {
    int rv = 0;
    while(x) { rv++; x &= x-1; }
    return rv; }

long long choose(long long m, long long n) {
    long long rv = 1;
    int i;
    for (i = 0; i < n; i++) {
        rv *= m-i;
        rv /= i+1; }
    return rv; }

void bitcounts_p2range(long long *counts, long long base, int l2range) {
    int i;
    assert((base & ((1LL << l2range) - 1)) == 0);
    counts += bitcount(base);
    for (i = 0; i <= l2range; i++)
        counts[i] += choose(l2range, i); }

void bitcounts_range(long long *counts, long long lo, long long hi) {
    int l2range = 0;
    while (lo + (1LL << l2range) - 1 <= hi) {
        if (lo & (1LL << l2range)) {
            bitcounts_p2range(counts, lo, l2range);
            lo += 1LL << l2range; }
        l2range++; }
    while (l2range >= 0) {
        if (lo + (1LL << l2range) - 1 <= hi) {
            bitcounts_p2range(counts, lo, l2range);
            lo += 1LL << l2range; }
        l2range--; }
    assert(lo == hi+1); }

int K(int x) {
    int rv = 0;
    while(x > 1) {
        x = bitcount(x);
        rv++; }
    return rv; }

int main() {
    long long counts[64];
    long long lo, hi, total;
    int i, k;
    while (scanf("%lld%lld%d", &lo, &hi, &k) == 3) {
        if (lo < 1 || lo > hi || k < 0) break;
        if (lo == 0 || hi == 0 || k == 0) break;
        total = 0;
        if (lo == 1) {
            lo++;
            if (k == 0) total++; }
        memset(counts, 0, sizeof(counts));
        bitcounts_range(counts, lo, hi);
        for (i = 1; i < 64; i++)
            if (K(i)+1 == k)
                total += counts[i];
        printf("%lld\n", total); }
    return 0; }
