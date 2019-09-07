#include <iostream>
#include <algorithm>
 
using namespace std;
 
const int MAX = 1000001;
 
int N;
int A[MAX];
 
long long GetMax(int from, int to)
{
    // 기저 사례
    if (from == to) return (long long)A[from] * A[from];
 
    int mid = (from + to) / 2;
    long long leftSum = GetMax(from, mid);
    long long rightSum = GetMax(mid + 1, to);
 
    // 왼쪽, 오른쪽 부분배열 중 최대를 찾음
    long long maxValue = max(leftSum, rightSum);
 
    int left = mid;
    int right = mid + 1;
 
    // mid에서 시작하는 교차하는 부분 배열
    long long sum = A[left] + A[right];
    long long minValue = min(A[left], A[right]);
    // 최대 값 비교
    maxValue = max(maxValue, sum * minValue);
 
    // 교차 하는 부분 배열에서 최대를 찾음
    while (left > from || right < to)
    {
        // 오른쪽으로 증가
        if (right < to && (left == from || A[left - 1] < A[right + 1]))
        {
            sum += A[++right];
            minValue = min(minValue, (long long)A[right]);
        }
        else    // 왼쪽으로 증가
        {
            sum += A[--left];
            minValue = min(minValue, (long long)A[left]);
        }
        long long crossSum = sum * minValue;
        // 최대 값 비교
        maxValue = max(maxValue, crossSum);
    }
    
    return maxValue;
}
 
int main() 
{
    cin.tie(0);
    ios::sync_with_stdio(false);
 
    cin >> N;
    for (int i = 1; i <= N; i++) cin >> A[i];
 
    cout << GetMax(1, N);
 
    return 0;
}

