#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <set>
#define SIZE 400000
using namespace std;
multiset<int> ms;
int arr[SIZE];
void getChe() {
    int i;
    for (i = 2; i <= SIZE; i++) {
        arr[i] = i;
    }
    for (i = 2; i*i <= SIZE; i++) { 
        if (arr[i] == 0)
            continue;
        for (int j = i + i; j <= SIZE; j += i) {
            arr[j] = 0;
        }
    }
}


int main(){
	int n;
	scanf("%d",&n);
	int i;
	int count[3]={0};
	for(i=0;i<n;i++){
		int x;
		scanf("%d",&x);
		count[x]++;
	}
	getChe();
	for(i=0;i<SIZE;i++){
		if(arr[i]!=0){
			ms.insert(arr[i]);
		}
	}
	multiset<int>::iterator it=ms.begin();
	int sum=0;
	while(1){
		if(*it-sum>1){
			if(count[2]>0){
				count[2]--;
				sum+=2;
				printf("2 ");
			}
			else{
				count[1]--;
				sum++;
				printf("1 ");
			}
		}
		else{
			if(count[1]>0){
				count[1]--;
				sum++;
				printf("1 ");
			}
			else{
				count[2]--;
				sum+=2;
				printf("2 ");
			}
		}
		if(*it<=sum){
			it++;
		}
		if(count[1]+count[2]==0){
			break;
		}
	}
}