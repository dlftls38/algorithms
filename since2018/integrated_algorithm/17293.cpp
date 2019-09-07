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
int main(){
	int nn;
	scanf("%d",&nn);
	int i;
	int n=nn;
	for(i=0;i<nn;i++){
		if(n>1)
			printf("%d bottles of beer on the wall, %d bottles of beer.\n",n,n);
		else
			printf("%d bottle of beer on the wall, %d bottle of beer.\n",n,n);
		n--;
		if(n>1)
			printf("Take one down and pass it around, %d bottles of beer on the wall.\n",n);	
		else if(n==1)
			printf("Take one down and pass it around, %d bottle of beer on the wall.\n",n);	
		else
			printf("Take one down and pass it around, no more bottles of beer on the wall.\n");
			printf("\n");
	}
	printf("No more bottles of beer on the wall, no more bottles of beer.\n");
	if(nn>1)
		printf("Go to the store and buy some more, %d bottles of beer on the wall.",nn);
	else
		printf("Go to the store and buy some more, %d bottle of beer on the wall.",nn);
}
