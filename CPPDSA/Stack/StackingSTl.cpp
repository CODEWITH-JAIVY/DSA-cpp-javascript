#include <iostream>
#include <stack>
using namespace std;

class StackApp {
private:
    const int maxSize = 5;
    stack<int> s;

public:
    void PushOperation(int data) {
        if (s.size() == maxSize) {
            cout << "Stack is full\n";
            return;
        }
        s.push(data);
        cout << "Pushed: " << data << endl;
    }

    void PopOperation() {
        if (s.empty()) {
            cout << "Stack is empty. Nothing to pop.\n";
            return;
        }
        cout << "Popped: " << s.top() << endl;
        s.pop();
    }

    void TopOperation() {
        if (s.empty()) {
            cout << "Stack is empty.\n";
            return;
        }
        cout << "Top element: " << s.top() << endl;
    }

    void IsEmpty() {
        if (s.empty()) {
            cout << "Stack is empty.\n";
        } else {
            cout << "Stack is not empty.\n";
        }
    }

    void Display() {
        if (s.empty()) {
            cout << "Stack is empty.\n";
            return;
        }
        stack<int> temp = s;
        cout << "Stack elements (top to bottom):\n";
        while (!temp.empty()) {
            cout << temp.top() << endl;
            temp.pop();
        }
    }
};

int main() {
    StackApp stackApp;
    int choice, value;

    do {
        cout << "\n========= Stack Menu =========\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Top Element\n";
        cout << "4. Is Empty\n";
        cout << "5. Display Stack\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                stackApp.PushOperation(value);
                break;
            case 2:
                stackApp.PopOperation();
                break;
            case 3:
                stackApp.TopOperation();
                break;
            case 4:
                stackApp.IsEmpty();
                break;
            case 5:
                stackApp.Display();
                break;
            case 0:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 0);

    return 0;
}
