#include <stdio.h>
#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <limits.h>
#include <functional>
#include <math.h>
#include <fstream>
#define INF 987654321
using namespace std;
typedef struct node{
    int data;
    node *left, *right;
} node;
node nodes[100001];
void preorder(node *pointer){
    if(pointer!=NULL){
        printf("%d ",pointer->data);
        preorder(pointer->left);
        preorder(pointer->right);
    }
}
void inorder(node *pointer){
    if(pointer!=NULL){
        inorder(pointer->left);
        printf("%d ",pointer->data);
        inorder(pointer->right);
    }
}
void postorder(node *pointer){
    if(pointer!=NULL){
        postorder(pointer->left);
        postorder(pointer->right);
        printf("%d",pointer->data);
    }
}
void input(node *pointer,node *newone,node *prev){
	if(pointer!=NULL){
		if(pointer->data<newone->data){
			input(pointer->right,newone,pointer);
		}
		else{
			input(pointer->left,newone,pointer);
		}
	}
	else{
		if(prev->data<newone->data){
			prev->right=newone;
		}
		else{
			prev->left=newone;
		}
	}
}
int main(void){
    int x;
    int cnt=1;
    while(scanf("%d",&x)==1){
        nodes[cnt].data = x;
        nodes[cnt].left = NULL;
        nodes[cnt++].right = NULL;
	}
	int cur=nodes[1].data;
    for(int i=2; i<cnt; i++){
        input(&nodes[1],&nodes[i],&nodes[1]);
    }
    preorder(&nodes[1]);
    cout << endl;
    inorder(&nodes[1]);
    cout << endl;
    postorder(&nodes[1]);
    cout << endl;
}
