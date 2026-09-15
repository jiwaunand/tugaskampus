#pragma once

class Node {
    public:
        int data;
        Node* next;
        Node(int data);
};

class Linkedlist {
    public:
        Node* head;
        Linkedlist();
        void insertChild(int data);
        void printingLinkedlist();
};
