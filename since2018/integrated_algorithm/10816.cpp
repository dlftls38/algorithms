#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <limits.h>
#include <functional>
#include <math.h>
using namespace std;
int a[500000];
int BSearch(int ar[], int len, int target){
    int first = 0;
    int last = len - 1;
    int mid = 0;
    int ans=0;
    while (first <= last){
        mid = (first + last) / 2;
        if (ar[mid] == target){
        	last = mid - 1;
        	ans=mid;
        }
        else{
            if (ar[mid] > target)
                last = mid - 1;
            else
                first = mid + 1;
        }
    }
    return ans;
}
int BSearch2(int ar[], int len, int target){
    int first = 0;
    int last = len - 1;
    int mid = 0;
    int ans=-1;
    while (first <= last){
        mid = (first + last) / 2;
        if (ar[mid] == target){
        	first = mid + 1;
        	ans=mid;
        }
        else{
            if (ar[mid] > target)
                last = mid - 1;
            else
                first = mid + 1;
        }
    }
    return ans;
}
int main(){
	int n,m;
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	scanf("%d",&m);
	for(i=0;i<m;i++){
		int x;
		scanf("%d",&x);
		int r=BSearch2(a,n,x);
		int l=BSearch(a,n,x);
		if(r!=-1 && l!=-1){
			printf("%d ",r-l+1);	
		}
		else{
			printf("0 ");
		}
	}
}
