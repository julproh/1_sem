#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct Node{
	int elem;
	struct Node *next;
};
struct Node *top=NULL;
void push (int);
void pop(int *);
void pech();
bool isempty();
int main(){
	int i,a;
	
	for(i=0;i<5;i++){
		scanf("%d",&a);
		push(a);
	}
	pech();
	pop(&a);
	printf("pop = %d\n",a);
	pech();
	while(!isempty())
	{pop(&a);
		pech();
	}
	
return 0;
}
void push (int a){
	struct Node *st;
	st=(struct Node*)malloc(sizeof(struct Node));
	st->elem=a;
	st->next=top;
	top=st;
	return;
}
void pop(int *a){
	if(isempty()) {
		printf("already is empty\n");
		return;
	}
	struct Node *st;
	st=top;
	*a=top->elem;
	top=top->next;
	free(st);
	return;
}
void pech(){
	struct Node *st=top;
	while(st!=NULL)
	{
		printf("%d   ",st->elem);
		st=st->next;
	}
	printf("\n");
		return;
	}
	bool isempty()
	{
		return top==NULL;
	}
	
