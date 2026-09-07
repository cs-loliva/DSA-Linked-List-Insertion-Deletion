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

int countNodes(NodePtr p) {
    int count = 0;
    while (p != NULL) {
        count++;
        p = p->next;
    }
    return count;
}

void displayList(NodePtr head) {
    NodePtr p = head;

    while(p != NULL) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

//Let main be
int main() {
    NodePtr head = NULL;
    char command;
    int value;

    while (cin >> command >> value) {
        if (command == 'i') {
            addHead(head, value);
            cout << "[" << countNodes(head) << "]";
        } else if (command == 'd') {
            if(head == NULL) {
                cout << " THE LIST IS ALREADY EMPTY " << endl;
            } else {
            deleteHead(head);
                cout << "[" << countNodes(head) << "]"; 
                displayList(head);
            }
        } else {
            cout << " INVALID COMMAND. " << endl;
        }
    }
}