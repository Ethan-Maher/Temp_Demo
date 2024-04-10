#include <iostream>
#include <cstdlib>
#include "temp.h"
using namespace std;

int main() {
    DoublyLinkedList<int> doublyLinkedList;
    int data[] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; ++i) {
        doublyLinkedList.append(data[i]);
    }

    cout << "Doubly Linked List (Front to Back):" << endl;
    doublyLinkedList.printForward();

    cout << "Doubly Linked List (Back to Front):" << endl;
    doublyLinkedList.printBackward();

    return 0;
}
