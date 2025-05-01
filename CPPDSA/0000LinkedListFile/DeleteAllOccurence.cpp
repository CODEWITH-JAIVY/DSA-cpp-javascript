#include <iostream>
using namespace std;

class list {
public:
    int data;
    list* next;

    list(int value) {
        this->data = value;
        this->next = nullptr;
    }
};

class Solution {
public:

    void display(list* head) {
        if (head == nullptr) {
            cout << "List is empty.\n";
            return;
        }

        list* temp = head;
        while (temp != nullptr) {
            cout << temp->data;
            if (temp->next != nullptr) cout << " -> ";
            temp = temp->next;
        }
        cout << endl;
    }

    list* deleteOccurrence(list* head, int data) {
        // Delete nodes with given data from the list
        while (head != nullptr && head->data == data) {
            list* temp = head;
            head = head->next;
            delete temp;
        }

        list* curr = head;
        while (curr != nullptr && curr->next != nullptr) {
            if (curr->next->data == data) {
                list* temp = curr->next;
                curr->next = curr->next->next;
                delete temp;
            } else {
                curr = curr->next;
            }
        }
        return head;
    }
};

int main() {
    // Creating a sample linked list: 1 -> 2 -> 3 -> 2 -> 4
    list* head = new list(1);
    head->next = new list(2);
    head->next->next = new list(3);
    head->next->next->next = new list(2);
    head->next->next->next->next = new list(4);

    Solution obj;
    cout << "Original list:\n";
    obj.display(head);

    head = obj.deleteOccurrence(head, 2);

    cout << "\nAfter deleting 2:\n";
    obj.display(head);

    // Clean up remaining memory
    while (head != nullptr) {
        list* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
