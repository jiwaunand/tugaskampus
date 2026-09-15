#include <iostream>
#include "Linkedlist.h"

Node::Node(int data) {
    this->data = data;
    this->next = nullptr;
}

Linkedlist::Linkedlist() {
    head = nullptr;
}

void Linkedlist::printingLinkedlist() {
    Node* print = head;
    while(print != nullptr) {
        std::cout<<print->data<<" ";
        print = print->next;
    }
}

void Linkedlist::insertChild(int data) {
    Node* newNode = new Node(data);
    if (head == nullptr) {
        head = newNode;
        return;
    }
    Node* current = head;
    while(current != nullptr) {
        current = current->next;
    }
    current->next = newNode;

}
