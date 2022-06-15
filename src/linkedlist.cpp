//
// Created by HugsGaming on 6/13/2022.
//

#include <linkedlist.h>


template<typename T>
SinglyLinkedList<T>::SinglyLinkedList() = default;

template<typename T>
SinglyLinkedList<T>::SinglyLinkedList(T data) {
    Node* new_node = new Node();
    new_node->data = data;
    new_node->next =  this->tail;
    this->head = new_node;
}

template<typename T>
T SinglyLinkedList<T>::get_head() {
    return head->data;
}
