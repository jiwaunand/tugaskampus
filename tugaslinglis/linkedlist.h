#ifndef LINKEDLIST_H
#define LINKEDLIST_H

class Node {
    public:
        int data;
        Node* next;
        Node(int data) : data(data), next(NULL) {

        }
    void insert(Node*& head, int data) {
        Node* newNode = new Node(data);
        if (head == NULL) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next != NULL) {
                current = current->next;
            }
            current->next = newNode;
        }
    }
};
#endif
