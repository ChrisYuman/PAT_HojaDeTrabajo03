#include "Ejercicio03.h"

Node<int>* Ejercicio03::copyList(Node<int>* head) {
    if (!head) {
        return nullptr;
    }

    Node<int>* current = head;
    while (current) {
        Node<int>* duplicate = new Node<int>{ current->value, nullptr, nullptr };
        duplicate->next = current->next;
        current->next = duplicate;
        current = duplicate->next;
    }

    current = head;
    while (current) {
        if (current->random) {
            current->next->random = current->random->next;
        }
        current = current->next->next;
    }

    Node<int>* newHead = head->next;
    current = head;
    Node<int>* copyCurrent = newHead;
    while (current) {
        current->next = copyCurrent->next;
        current = current->next;
        if (current) {
            copyCurrent->next = current->next;
            copyCurrent = copyCurrent->next;
        }
    }

    return newHead;
}
