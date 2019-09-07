#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int arr[1001];
void get(int num){
	int i,j;
    for (i = 2; i <= num; i++) {

        arr[i] = i;

    }
	for (i = 2; i*i <= num; i++) { 

        if (arr[i] == 0) // 이미 체크된 수의 배수는 확인하지 않는다

            continue;

        for (int j = i + i; j <= num; j += i) { // i를 제외한 i의 배수들은 0으로 체크

            arr[j] = 0;

        }

    }
}

int main(){
	int n;
	scanf("%d",&n);
	int a[100]={0};
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	get(1000);
	int count=0;
	for(i=0;i<n;i++){
		if(arr[a[i]]!=0){
			count++;
		}
	}
	printf("%d",count);
}
