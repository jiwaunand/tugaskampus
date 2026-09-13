#include <iostream> // Use Std Librray
#include "linkedlist.h" // Include the linked list header
using namespace std;

int main() {
    Node* head = NULL;
    head->insert(head, 3);
    cout << head->data << endl;
}
