#include <iostream> // Use Std Librray
#include "linkedlist.h" // Include the linked list header
using namespace std;

void printingLinkedlist(Node* head) {
    Node* temp = head;
    while(temp != nullptr) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}


int main() {
    Node* head = new Node(5);
    head->next = new Node(10);
    printingLinkedlist(head);
}
