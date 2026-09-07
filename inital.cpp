#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

//instead of pass by reference we use an actual erusable fxn
typedef Node* NodePtr;
//add at beginning
void addHead(NodePtr& head, int newdata) {
    NodePtr newPtr = new Node;

    newPtr -> data = newdata;
    newPtr -> next = head;

    head = newPtr;
}

void deleteHead(NodePtr& head) {
    if (head != NULL) {
        NodePtr p = head;
        head = head->next;
        delete p;
    }
}

void displayList(NodePtr head) {
    NodePtr p = head;

    while(p != NULL) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int main() {
/*    
    Node* head = NULL;

   //first node
   Node* newPtr = new Node;
   newPtr -> data = 20;
   newPtr -> next = NULL;
   head = newPtr;

   //add 13 to beginning
   newPtr = new Node;
   newPtr -> data = 13;
   newPtr -> next = head;
   head = newPtr;

   cout << head->data << endl;
   cout << head->next->data << endl;
*/
    NodePtr head = NULL;
    addHead(head, 20);
    addHead(head, 13);

    cout << "List: ";
    displayList(head);

    addHead(head, 50);
    cout << "After adding 50 at the head: ";
    displayList(head);

    deleteHead(head);
    cout << "After deleting head: ";
    displayList(head);
   

    return 0;
}