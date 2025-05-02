#include <iostream>
using namespace std;
class Queue
{
private:
    int front;
    int rare;
    static const int size = 4;
    int queue[size];

public:
    Queue () 
    {
        front = -1;
        rare = -1;
    }

    void QueueImplementation(int data)
    {
        if (rare == size - 1)
        {
            cout << "Queue is full " << endl;
            return;
        }
        rare++;
        if (front == -1)
            front = 0;
        queue[rare] = data;
        cout << "Inserted " << data << " into the queue." << endl;
    }
    void popOperartion()
    {
        if (front == size - 1)
        {
            cout << "There is no any element present in the queue" << endl;
            return;
        }
        int temp = queue[front];
        front++;
        cout << "Pop data from the queue " << temp << endl;
    }

    void display()
    {
        if (front == size - 1)
        {
            cout << " Queue is empty " << endl;
            return;
        }
        cout<< "Queue elements are: " << endl;
        while (front != size )
        {
            cout << queue[front] << " ";
            front++;
        }
        front = (front == size) ? -1 : front;
        cout << endl;
    }
};

int main()
{
    Queue q;
    q.QueueImplementation(5) ;
    q.QueueImplementation(10) ;
    q.QueueImplementation(15) ;
    q.QueueImplementation(20) ;
    q.popOperartion() ;
    q.popOperartion() ;
    q.display() ;
    return 0  ; 
     
}