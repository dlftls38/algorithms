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
int a[10000],n,m,i;
int BSearch(){
    int first = 1;
    int last = a[n-1];
    int mid = 0;
    int val=0;
    int ans;
    while (first <= last){
        mid = (first + last) / 2;
        int temp=0;
        for(int i=0;i<n;i++){
        	if(a[i]<mid){
        		temp+=a[i];
			}
			else{
				temp+=mid;
			}
		}
        if (temp>m){
            last = mid - 1;
        }
        else{
            first = mid + 1;
            if(val<temp){
            	val=temp;
            	ans=mid;
			}
        }
    }
    return ans;
}
int main(){
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	scanf("%d",&m);
	printf("%d",BSearch());
}
