#ifndef TEMP_H
#define TEMP_H

template<typename T>
struct SinglyLinkedListNode {
    T data;
    SinglyLinkedListNode<T>* next;

    SinglyLinkedListNode(const T& value);
};

template<typename T>
struct DoublyLinkedListNode : public SinglyLinkedListNode<T> {
    DoublyLinkedListNode<T>* prev;

    DoublyLinkedListNode(const T& value);
};

template<typename T>
class DoublyLinkedList {
public:
    DoublyLinkedList();

    void append(const T& data);

    void printForward() const;

    void printBackward() const;

private:
    DoublyLinkedListNode<T>* head;
    DoublyLinkedListNode<T>* tail;
};

#include "temp.template"

#endif
