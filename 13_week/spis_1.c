#include<stdio.h>
#include<stdlib.h>

struct list{
	int elem;
	struct list *next;
};
void print_spis(struct list*);
int main()
{
	struct list *head=NULL, *current, *prev;
	int i;
	for(i=0;i<5;i++)
	{ current=(struct list*) malloc (sizeof(struct list));
		if(head==NULL) head=current;
		else prev->next=current;
		//current->elem=i+1;
		//scanf("%d",current);
		scanf("%d",&(current->elem));
		current->next=NULL;
		prev=current;
	}
	print_spis(head);
		return 0;
}
void print_spis(struct list *head)
{
	struct list *current;
	current=head;
	while(current!=NULL)
	{
	printf("%d   ",current->elem);
	current=current->next;
}
	return;
}
