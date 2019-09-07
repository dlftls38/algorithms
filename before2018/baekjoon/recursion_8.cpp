#include <stdio.h>
void move(int from, int to){
    printf("%d %d\n", from, to);
}

// n개의 원반을 from 에서 by를 거쳐 to로 옮긴다.
void hanoi(int n, int from, int by, int to){
    if (n == 1)
        move(from, to);
    else{
        hanoi(n - 1, from, to, by);    // 1번  N-1개의 원반을 기둥3을 거쳐 2로 옮긴다.
        move(from, to);                // 2번 기둥 1에서 1개의 원반을 기둥 3으롱 롬긴다.
        hanoi(n - 1, by, from, to);    // 3번 기둥 2에서 N-1개의 원반을 기둥 3으로 옮긴다.
    }
}
int main(){
	int n;
	scanf("%d",&n);
	hanoi(n,1,2,3);
}
