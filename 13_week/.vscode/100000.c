#include <stdio.h>
#include <stdlib.h>

typedef int Item;
typedef struct list {
    Item elem;
    struct list *next;
} List;
void deletlast(List *head)
{
  List *temp;
  temp = head;
  while (temp->next != NULL)
    temp = temp->next;
  free(temp); 

}
List* deletfir(List *fir)
{
  List *temp;
  temp = fir;
  fir = fir -> next; 
  free(temp); 
  return fir;
}
List * deletelem(List *lst, List *head)
{
  List *temp;
  temp = head;
  while (temp->next != lst)
    temp = temp->next;
  temp -> next = lst -> next; 
  free(lst); 
  return(temp);
}
List * vkonec(List *lst, int number)
{
  List *temp, *p;
  temp = (List *)malloc(sizeof(List));
  temp -> next = NULL;
  temp->elem = number; 
  lst->next = temp; 
  return(temp);
}
List * vnachalo(List *lst, int number)
{
  List *temp, *p;
  temp = (List *)malloc(sizeof(List));
  temp->elem = number; 
  temp->next = lst; 
  return(temp);
}
List * addelem(List *lst, int number)
{
  List *temp, *p;
  temp = (List *)malloc(sizeof(List));
  p = lst->next;
  lst->next = temp;
  temp->elem = number; 
  temp->next = p; 
  return(temp);
}

int main() {
    FILE *fp;
    List *head = NULL, *current, *prev, *ssilka; 
    int i = 1, n, max =10, znach, k;
    for (i =0; i<10; i++) {
        current  = (List*)malloc(sizeof(List));
        current -> elem = i+1;
        current -> next = NULL;  
        if (head == NULL) head = current; 
        else prev -> next = current;
        prev = current;};
        ssilka = head;
            do
            {
                printf("%d ", ssilka -> elem);
                ssilka = ssilka -> next;
            } while (ssilka -> next != NULL);
            printf("%d ", ssilka -> elem);
            ssilka = head -> next;
            printf("\n");
    while(i!=0){
        printf("Komandi 1-dobvnachalo 2-dobvkonec 3-dobelem 4-deletfir 5 - deletelast 6 - deletelem 7 - deletall 8 - v fael\n");
        scanf("%d", &i);
        switch (i)
        {
        case 1:
            scanf("%d", &n);
            head = vnachalo(head, n);
            ssilka = head;
            while (ssilka -> next != NULL)
                {
                    printf("%d ", ssilka -> elem);
                    ssilka = ssilka -> next;
                }
            ssilka = head -> next;
            printf("\n");
            break;
        case 2:
            scanf("%d", &n);
            ssilka = head -> next;
            k = 1;
            while (ssilka -> next != NULL) {
                ssilka = ssilka -> next;
                k++;}
            vkonec(ssilka, n);
            ssilka = head;
            do
                {
                    printf("%d ", ssilka -> elem);
                    ssilka = ssilka -> next;
                } while (ssilka -> next != NULL);
                printf("%d", ssilka -> elem);
            ssilka = head -> next;
            printf("\n");
            break;
        case 3:
            scanf("%d %d", &n, &znach);
            if (n==0) {
                ssilka = head;
                addelem(ssilka, znach);
                 ssilka = head;
            do
            {
                printf("%d ", ssilka -> elem);
                ssilka = ssilka -> next;
            } while (ssilka -> next != NULL);
            ssilka = head -> next;
            printf("\n");
                break;
            }
            ssilka = head -> next;
            while (ssilka ->elem != n) {
                ssilka = ssilka -> next;}
            addelem(ssilka, znach);
            ssilka = head;
            do
            {
                printf("%d ", ssilka -> elem);
                ssilka = ssilka -> next;
            } while (ssilka -> next != NULL);
            printf("%d ", ssilka -> elem);
            ssilka = head -> next;
            printf("\n");
            break;
        case 4:
            head = deletfir(head);
            ssilka = head;
            do
            {
                printf("%d ", ssilka -> elem);
                ssilka = ssilka -> next;
            } while (ssilka -> next != NULL);
            printf("%d", ssilka -> elem);
            ssilka = head -> next;
            printf("\n");
            break;
        case 5:
            deletlast(head);
            ssilka = head;
            do
            {
                printf("%d ", ssilka -> elem);
                ssilka = ssilka -> next;
            } while (ssilka -> next != NULL);
            printf("\n");
            break;
        case 6:
            scanf("%d", &n);
            ssilka = head->next;
            while (ssilka ->elem != n) {
                ssilka = ssilka -> next;}
            deletelem(ssilka, head);
            ssilka = head;
            do
            {
                printf("%d ", ssilka -> elem);
                ssilka = ssilka -> next;
            } while (ssilka -> next != NULL);
            printf("%d", ssilka -> elem);
            ssilka = head -> next;
            printf("\n");
            break;
        case 7:
            while (head != NULL) head=deletfir(head);
            printf("Pusto");
            break;
        case 8:
            fp = fopen("fael", "w+");
            ssilka = head;
            do
            {
                fprintf(fp,"%d ", ssilka -> elem);
                ssilka = ssilka -> next;
            } while (ssilka -> next != NULL);
            fprintf(fp, "%d\n", ssilka -> elem);
            fclose(fp);
            break;
        default:
            i=0;
            break;
        }
    }
    return 0;
}