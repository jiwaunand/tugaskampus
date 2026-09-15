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
        void printingLinkedlist();
        void insertHead(int data);
        void insertTail(int data);
        void insertMiddle(int data, int position);
        void deleteHead();
};
