// Linked list implementation in C++

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// Creating a node
class Node1  {
   public:
  int value;
  Node1* next;
};
class Node2  {
  public:
  int values;
  Node2* next;
};
void reverse()
    {
        // Initialize current, previous and next pointers
        Node* current = head;
        Node *prev = NULL,*next = NULL;
 
        while (current != NULL) {
            // Store next
            next = current->next;
            // Reverse current node's pointer
            current->next = prev;
            // Move pointers one position ahead.
            prev = current;
            current = next;
        }
        head = prev;
    }
int main() {
  Node1* head;
  Node1* one = NULL;
  Node1* two = NULL;
  Node1* three = NULL;
  
   Node2* heads;
  Node2* onee = NULL;
  Node2* twoo = NULL;
  Node2* threee = NULL;

  // allocate 3 nodes in the heap
  one = new Node1();
  two = new Node1();
  three = new Node1();

  onee = new Node2();
  twoo = new Node2();
  threee = new Node2();

  // Assign value values
  one->value = 1;
  two->value = 2;
  three->value = 3;
 
  onee->values = 4;
  twoo->values = 5;
  threee->values = 6;

  // Connect nodes
  one->next = two;
  two->next = three;
  three->next = NULL;
  head = one;

  onee->next = twoo;
  twoo->next = threee;
  threee->next = NULL;
  
  
  heads = onee;

Node1.reverse();
Node2.reverse();
 
  // print the linked list value
 
  while (head != NULL  ) {
    cout << head->value;
    head = head->next;
    cout<<endl;
  }
  

   while (heads != NULL) {
    cout << heads->values;
    heads = heads->next;
    cout<<endl;
  }
}