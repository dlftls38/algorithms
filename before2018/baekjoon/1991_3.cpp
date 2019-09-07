#include <stdio.h>
char tree[100000000];
void preorder(int a){
    if(tree[a]!='.'){
        printf("%c",tree[a]);
        if(tree[a*2] >= 65 && tree[a*2]<=91){preorder(a*2);}
        if(tree[(a*2)+1] >= 65 && tree[(a*2)+1]<=91){preorder((a*2) + 1);}
    }
}

void inorder(int a){
    if(tree[a]!='.'){
        if(tree[a*2] >= 65 && tree[a*2]<=91){inorder(a*2);}
        printf("%c",tree[a]);
        if(tree[(a*2)+1] >= 65 && tree[(a*2)+1]<=91){inorder((a*2) + 1);}
    }
}


void postorder(int a){
    if(tree[a]!='.'){
        if(tree[a*2] >= 65 && tree[a*2]<=91){postorder(a*2);}
        if(tree[(a*2)+1] >= 65 && tree[(a*2)+1]<=91){postorder((a*2) + 1);}
        printf("%c",tree[a]);
    }
}


int main(){
    int n,num=1;
	char root,left,right,neww=2;
    int k=0;
    scanf("%d",&n);
    tree[1] = 65;

    for(int i=1;i<=n;i++){
        getchar();
        scanf("%c %c %c",&root,&left,&right);
        // printf("i %d\n",i);
        for(int j=1;j<=num;j++){
            if(tree[j] == root){ tree[2*j] = left; tree[(2*j)+1] = right;}
        }
        num += neww;
        neww = neww*10;
    }
    // 전위순회
    
    preorder(1);
    printf("\n");

    //중위순회
    inorder(1);
    printf("\n");

    //후위순회
    postorder(1);
    printf("\n");

    // for(int i=1;i<=15;i++){
    //     printf("%c",tree[i]);
    // }
    // printf("\n");
}
