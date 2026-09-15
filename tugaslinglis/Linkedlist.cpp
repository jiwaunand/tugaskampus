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

void Linkedlist::insertHead(int data) {
    Node* newNode = new Node(data);
    if (head == nullptr) {
        head = newNode;
        std::cout<<"Penambahan data awal berhasil"<<std::endl;
        return;
    }
    newNode->next = head;
    head = newNode;
    std::cout<<"Penambahan data berhasil"<<std::endl;
}

void Linkedlist::insertMiddle(int data, int position) {
    Node* newNode = new Node(data);
    Node* current = head;
    for(int i = 0; i < position - 1; i++) {
        current = current->next;
    }
    newNode->next = current->next;
    current->next = newNode;
    std::cout<<"Penambahan data berhasil"<<std::endl;
}

void Linkedlist::insertTail(int data) {
    Node* newNode = new Node(data);
    Node* current = head;
    while(current->next != nullptr) {
        current = current->next;
    }
    current->next = newNode;
    std::cout<<"Penambahan data berhasil"<<std::endl;
}

void Linkedlist::
