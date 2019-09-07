#include <stdio.h>
#include <stdlib.h>

typedef struct tnode{
	/* Define node */
	struct tnode* left_child;
    struct tnode* right_child;
	char val;
} tnode;


typedef struct tree{
	/* Define tree */
	tnode* next;
} tree;

tnode* newtnode(char);

tree* newtree();

void inorder(tree*);

void preorder(tree*);

void postorder(tree*);

void insert(tree*, tnode* );

int main(int argc, char const *argv[]){
	tree* t = newtree();
	char a[10] = {'G','D','I','B','F','H','J','A','C','E'};
	int i;
	for(i = 0; i<10;i++){
		insert(t, newtnode(a[i]));
	}
	printf("inorder   : ");
	inorder(t);
	printf("\n");
	printf("preorder  : ");
	preorder(t);
	printf("\n");
	printf("postorder : ");
	postorder(t);
	printf("\n");
	return 0;
}

tnode* newtnode(char val){
	tnode* node = (tnode*)malloc(sizeof(tnode));
	node -> val = val;
	node -> left_child = NULL;
	node -> right_child = NULL;
	return node;
}

tree* newtree(){
	tree* ne = (tree*)malloc(sizeof(tree));
	ne -> next = NULL;
	return ne;
}

void inorder(tree* now){
	if(now->next!=NULL){
		if(now->next->left_child!=NULL){
			tree* ne = newtree();
			ne -> next = now->next->left_child;
			inorder(ne);
			free(ne);
		}
		printf("%c ",now->next->val);
		if(now->next->right_child!=NULL){
			tree* ne = newtree();
			ne ->next = now->next->right_child;
			inorder(ne);
			free(ne);
		}
	}
}

void preorder(tree* now){
	if(now->next!=NULL){
		printf("%c ", now->next->val);
		if(now->next->left_child!=NULL){
			tree* ne = newtree();
			ne ->next = now->next->left_child;
			preorder(ne);
			free(ne);
		}
		if(now->next->right_child!=NULL){
			tree* ne = newtree();
			ne ->next = now->next->right_child;
			preorder(ne);
			free(ne);
		}
	}
}

void postorder(tree* now){
	if(now->next!=NULL){
		if(now->next->left_child!=NULL){
			tree* ne = newtree();
			ne ->next = now->next->left_child;
			postorder(ne);
			free(ne);
		}
		if(now->next->right_child!=NULL){
			tree* ne = newtree();
			ne->next = now->next->right_child;
			postorder(ne);
			free(ne);
		}
		printf("%c ", now->next->val);
	}
}

void insert(tree* root, tnode* now){
	if(root->next==NULL){
		root->next=now;
	}
	else{
		if(root->next->val>now->val){
			if(root->next->left_child==NULL){
				root->next->left_child=now;
			}
			else{
				tree* ne = newtree();
				ne -> next=root->next->left_child;
				insert(ne,now);
				free(ne);
			}
		}
		else{
            if(root->next->right_child==NULL){
				root->next->right_child=now;
			}   
			else{
				tree* ne = newtree();
				ne -> next=root->next->right_child;
				insert(ne,now);
				free(ne);
			}

		}
	}
}
