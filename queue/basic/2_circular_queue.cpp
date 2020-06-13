// Circular Queue Implementation using array
#include <bits/stdc++.h>
using namespace std;

// TODO IMPLEMENT YOUR VERSION LATER
class Queue
{
    int *arr;
    int front, rear;
    int size;

public:
    Queue(int s)
    {
        size = s;
        front = rear = -1;
        arr = new int[s];
    }

    void enQueue(int);
    int deQueue();
    void displayQueue();
};

void Queue::enQueue(int value)
{
    // When Queue is Full
    if ((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1)))
    {
        cout << "\nQueue is Full";
        return;
    }
    // Inserting First Element
    else if (front == -1)
    {
        front = rear = 0;
        arr[rear] = value;
    }
    else if (rear == size - 1 && front != 0)
    {
        rear = 0;
        arr[rear] = value;
    }
    else
    {
        rear++;
        arr[rear] = value;
    }
}

int Queue::deQueue()
{
    if (front == -1)
    {
        cout << "\nQueue is Empty";
        return INT_MIN;
    }
    int data = arr[front];
    arr[front] = -1;
    if (front == rear)
    {
        front = rear = -1;
    }
    else if (front == size - 1)
        front = 0;
    else
        front++;
    return data;
}

void Queue::displayQueue()
{
    if (front == -1)
    {
        cout << "\nQueu is Empty";
        return;
    }
    cout << "\nElements : ";
    if (rear >= front)
    {
        for (int i = front; i <= rear; i++)
            cout << arr[i] << ' ';
    }
    else
    {
        for (int i = front; i < size; i++)
            cout << arr[i] << ' ';

        for (int i = 0; i <= rear; i++)
            cout << arr[i] << ' ';
    }
}

int main()
{
    Queue q(5);

    q.enQueue(14);
    q.enQueue(22);
    q.enQueue(13);
    q.enQueue(-6);

    // Display elements present in Circular Queue
    q.displayQueue();
    printf("\nDeleted value = %d", q.deQueue());
    printf("\nDeleted value = %d", q.deQueue());

    q.displayQueue();

    q.enQueue(9);
    q.enQueue(20);
    q.enQueue(5);

    q.displayQueue();

    q.enQueue(20);
    return 0;
}