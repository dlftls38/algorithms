#include <stdio.h>
void move(int from, int to){
    printf("%d %d\n", from, to);
}

// n���� ������ from ���� by�� ���� to�� �ű��.
void hanoi(int n, int from, int by, int to){
    if (n == 1)
        move(from, to);
    else{
        hanoi(n - 1, from, to, by);    // 1��  N-1���� ������ ���3�� ���� 2�� �ű��.
        move(from, to);                // 2�� ��� 1���� 1���� ������ ��� 3���� �ұ��.
        hanoi(n - 1, by, from, to);    // 3�� ��� 2���� N-1���� ������ ��� 3���� �ű��.
    }
}
int main(){
	int n;
	scanf("%d",&n);
	hanoi(n,1,2,3);
}
