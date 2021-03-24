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
	Item k;
} Queue;
void initqueue(Queue *pq)
{
pq->front=NULL;
pq->rear=NULL;
pq->k=0;
return;
}

bool queueisfull(const Queue *pq)
{
	 return pq->k==10;
}
bool queueisempty(const Queue *pq)
{
	 return pq->k==0;
}
void addqueue(Item item,Queue *pq){
	
	Node *pnew;
	pnew=(Node*) malloc (sizeof(Node));
	pnew->next=NULL;
	pnew->elem=item;
	if(queueisempty(pq)) pq->front=pnew;
	else pq->rear->next=pnew;
	pq->rear=pnew;
	pq->k++;
	return;
}
Node *vnachalo(Queue *q, int znach) {
    q->k++;
    Node *temp, *p;
    temp = (Node *)malloc(sizeof(Node));
    temp -> next = q -> front; 
    return (temp); 
}

int main() {
    Queue * q = NULL;
    q = (Queue *)malloc(sizeof(Queue));

    q -> front = vnachalo(q, 5);
    printf("%d", q -> k);
    return 0;
}