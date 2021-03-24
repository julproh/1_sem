#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int Item;
 typedef struct node {
	Item elem;
	struct node *next;
} Node;
typedef struct queue {
	Node *front;
	Node *rear;
	int items;
	} Queue;
const int maxqueue =10;	
void initqueue(Queue *);
bool queueisfull(const Queue *);
bool queueisempty(const Queue*);
void addqueue(Item,Queue *);
void delqueue(Item*,Queue*);
void pechqueue (Queue*);
int main()
{
	int i;
	Item a,*pitem;
	Queue *pq=NULL;
	//Node *pt=NULL;
	pitem=&a;
	pq=(Queue*) malloc (sizeof(Queue));
	initqueue(pq);
	if(queueisfull(pq)) printf("YES\n");
	else printf("NO\n");
	if(queueisempty(pq)) printf("YES\n");
	else printf("NO\n");
	for (i=0;i<maxqueue;i++)
	addqueue(i+5,pq);
	pechqueue(pq);
	printf("\n==========================\n\n");
    addqueue(999,pq);
    	pechqueue(pq);
	printf("\n==========================\n\n");
    delqueue(pitem,pq);
    printf("del elem=%d\n",a);
    printf("kol=%u\n",pq->items);
    	pechqueue(pq);
	printf("\n==========================\n\n");
	
    while(pq->items!=0) {
    delqueue(pitem,pq);
    printf("a=%d   ",a);
   
}
printf("\n");
   if(queueisempty(pq)) printf("YES\n");
	else printf("NO\n");
	return 0;
}
void initqueue(Queue *pq)
{
pq->front=NULL;
pq->rear=NULL;
pq->items=0;
return;
}
bool queueisfull(const Queue *pq)
{
	 return pq->items==maxqueue;
}
bool queueisempty(const Queue *pq)
{
	 return pq->items==0;
}
void addqueue(Item item,Queue *pq){
	
	Node *pnew;
	pnew=(Node*) malloc (sizeof(Node));
	pnew->next=NULL;
	pnew->elem=item;
	if(queueisempty(pq)) pq->front=pnew;
	else pq->rear->next=pnew;
	pq->rear=pnew;
	pq->items++;
	return;
}
	
void delqueue(Item *pitem,Queue *pq){
	Node *pt;
	*pitem=pq->front->elem;
	pt=pq->front;
	pq->front=pq->front->next;
    free(pt);
	 pq->items--;
	return;
}
void pechqueue (Queue *pq){
	int i;
	Node *pn;
	pn=pq->front;
	for(i=0;i<pq->items;i++){
	printf("%d  ",pn->elem);
	pn=pn->next;
}
	return;
}
