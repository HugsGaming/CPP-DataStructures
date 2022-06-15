//
// Created by HugsGaming on 6/13/2022.
//

#ifndef DATASTRUCTURES_LINKEDLIST_H
#define DATASTRUCTURES_LINKEDLIST_H

template <typename T>
class SinglyLinkedList
{
private:
    struct Node {
        T data;
        Node* next;
    };
    int count = 0;
    Node* head;
    Node* tail;
public:
    SinglyLinkedList<T>();
    explicit SinglyLinkedList<T>(T data);
    T get_head();
    T get_tail();
    void append(T data);
    void prepend(T data);
    void removeHead();
    void removeTail();
    void print_values();
};



#include "../src/linkedlist.cpp"

#endif //DATASTRUCTURES_LINKEDLIST_H
