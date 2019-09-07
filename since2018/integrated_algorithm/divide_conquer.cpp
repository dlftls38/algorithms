#include <iostream>
#include <algorithm>
 
using namespace std;
 
const int MAX = 1000001;
 
int N;
int A[MAX];
 
long long GetMax(int from, int to)
{
    // ���� ���
    if (from == to) return (long long)A[from] * A[from];
 
    int mid = (from + to) / 2;
    long long leftSum = GetMax(from, mid);
    long long rightSum = GetMax(mid + 1, to);
 
    // ����, ������ �κй迭 �� �ִ븦 ã��
    long long maxValue = max(leftSum, rightSum);
 
    int left = mid;
    int right = mid + 1;
 
    // mid���� �����ϴ� �����ϴ� �κ� �迭
    long long sum = A[left] + A[right];
    long long minValue = min(A[left], A[right]);
    // �ִ� �� ��
    maxValue = max(maxValue, sum * minValue);
 
    // ���� �ϴ� �κ� �迭���� �ִ븦 ã��
    while (left > from || right < to)
    {
        // ���������� ����
        if (right < to && (left == from || A[left - 1] < A[right + 1]))
        {
            sum += A[++right];
            minValue = min(minValue, (long long)A[right]);
        }
        else    // �������� ����
        {
            sum += A[--left];
            minValue = min(minValue, (long long)A[left]);
        }
        long long crossSum = sum * minValue;
        // �ִ� �� ��
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

