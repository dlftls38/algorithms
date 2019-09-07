#include <stdio.h>
#include <stdlib.h>
#include "../headers/node.h"

/* Define  'list' using typedef and struct.
	queue has head, and size */

typedef struct list{
	int size;
	struct node* head;
}list;

/* Prototypes */
list* init_list();
void appendTo(list* list, node* newnode);
void delAt(list* list, int n);
void print_list(list* list);

int main(int argc, char const *argv[]) {
	list* linked = init_list();
	int i;
	for (i = 1; i < 6; i++) {
		appendTo(linked, newnode(i));
	}
	print_list(linked);
	delAt(linked, -1);
	delAt(linked, 5);
	print_list(linked);
	delAt(linked, 3);
	print_list(linked);
	return 0;
}
list* init_list(){
	list* temp = (list*)malloc(sizeof(list));
	temp->size=0;
	temp->head=NULL;
	return temp;
}
void appendTo(list* list, node* newnode){
	if(list->size==0){
		list->head=newnode;
	}
	else{
		node* now=list->head;
		while(now->next!=NULL){
			now=now->next;
		}
		now->next=newnode;
	}
	list->size++;
}
void delAt(list* list, int n){
	printf("Delete %d index of linked list\n",n);
	printf("--------------------------------\n");
	if(n<=list->size && n>0){
		node* now = list->head;
		if(n==1){
			list->head=now->next;
			free(now);
		}
		else{
			for(int i=2;i<n;i++){
				now=now->next;
			}
			node* mid = now->next;
			now->next=now->next->next;
			free(mid);
		}
		list->size--;
	}
	else{
	printf("delAt(): out of index ( n = %d )\n\n",n);
	}
}
void print_list(list* list){
	int len=list->size;
	node* now = list->head;
	printf("list size = %d\n",len);
	for(int i=0;i<len;i++){
		printf("[%d] ",now->val);
		now=now->next;
	}
	printf("\n\n");
}
