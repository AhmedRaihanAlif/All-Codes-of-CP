#include <bits/stdc++.h>
using namespace std;
struct Node {
   char alphabet;
   int value;
   struct Node* next;
};

void insert_at_the_end(Node** head_ref, char alphabets,int new_data)
{

    Node* new_node = new Node();
    Node *last = *head_ref;
    new_node->alphabet = alphabets;
    new_node->value = new_data;
    new_node->next = NULL;


    if(*head_ref==NULL)
    {
        *head_ref = new_node;
        return;
    }


    while(last->next != NULL)
        last = last->next;
        last->next = new_node;
    return;
}
void frequency_count(Node* head, char x)
{
    Node* current = head;
    while (current != NULL)
    {
        if (current->alphabet == x){
            current->value++;
               }
            current = current->next;
    }

}

void printList(Node *node)
{
    cout<<endl;
    while (node != NULL)
    {
        cout<<node->alphabet<<" : "<<node->value<<endl;
        node=node->next;
    }
}


int main()
{
    Node* head=NULL;
    for(char i='a';i<='z';++i){
            insert_at_the_end(&head,i, 0);
    }
cout<<"Please give a string : ";
char s[100];
int c = 0;
cin>>s;
while (s[c] != '\0'){
        if(s[c]>=65&&s[c]<=90){
            s[c]=tolower(s[c]);
        }
     frequency_count(head, s[c]);
     c++;
   }
printList(head);
    return 0;
}
