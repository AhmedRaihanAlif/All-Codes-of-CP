#include <stdio.h>
#include <stdlib.h>

struct listNode {
 int item;
 struct listNode * prev;
 struct listNode * next;
}*head, *last;

void createList(int n)
{
 int i, data;
 //ekhane ami head je random node create krte hoe oita  create krlm....
 struct listNode *newNode;
 if(n >= 1)
 {
     //ekdom prothom node  head  name e banailam
 head = (struct listNode *)malloc(sizeof(struct listNode));
 printf("Enter data of 1 node: ");
 scanf("%d", &data);
 head->item = data;
 head->prev = NULL;
 head->next = NULL;
 last = head;
 for(i=2; i<=n; i++)
 {
     //notun node banai
 newNode = (struct listNode *)malloc(sizeof(struct listNode));
 printf("Enter data of %d node: ", i);
 scanf("%d", &data);
 newNode->item = data;
 newNode->prev = last;
 newNode->next = NULL;
 //notun je node toiri hbe oitai last node
 last->next = newNode;
 last = newNode;
 }
 printf("\nLIST CREATED \n\n");
 }
}

void displayList()
{
    //temp ekta random node banaisi jake ami sb node r kase niye giye print koraisi...
 struct listNode * temp;
 int n = 1;
 if(head == NULL)
 {
 printf("List is empty.\n");
 }
 else
 {
//ami random temp node ke head r sathe connect kre disi jate o list r sbaike access krte pre

 temp = head;
 while(temp != NULL)
 {
 printf("%d\n", temp->item);
 n++;
 temp = temp->next;
 }
 }
}

void deleteFromBeginning()
{
 struct listNode * toDelete;
 if(head == NULL)
 {
 printf("Not delete.\n");
 }
 else
 {
 toDelete = head;
 head = head->next;
 if (head != NULL)
 head->prev = NULL;
 free(toDelete);
 }
}

void deleteFromEnd()
{
 struct listNode * toDelete;
 if(last == NULL)
 {
 printf("Not delete\n");
 }
 else
 {
 toDelete = last;
 last = last->prev;
 if (last != NULL)
 last->next = NULL;
 free(toDelete);
 }
}

void deleteFromN(int position)
{
 struct listNode *current;
 int i;
 current = head;
 for(i=1; i<position && current!=NULL; i++)
 {
 current = current->next;
 }
 if(position == 1)
 {
 deleteFromBeginning();
 }
 else if(current == last)
 {
 deleteFromEnd();
 }
 else if(current != NULL)
 {
 current->prev->next = current->next;
 current->next->prev = current->prev;
 free(current);
 }
}

int main()
{
 int n, data, choice=1;
 head = NULL;
 last = NULL;
createList(8);
int no = 3;
int result;
 for (int m=1;m<9;m++)
 {
 result = m%no;
 if(result==0)
 {
 deleteFromN(m);
 }
}
 displayList();
 return 0;
}
