#include <stdio.h>
#include <stdlib.h>

typedef struct tnode{
	/* Define node */	
} tnode;


typedef struct tree{
	/* Define tree */	
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
	inorder(t);
	preorder(t);
	postorder(t);
	return 0;
}
