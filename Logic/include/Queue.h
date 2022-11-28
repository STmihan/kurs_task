#pragma once
#include <iostream>
#include <cstdlib>
// Define the default capacity of the Queue
#define SIZE 10

// A class to represent a Queue
template <class T>
class Queue
{
    T* arr;         // array to store Queue elements
    int capacity;   // maximum capacity of the Queue
    int front;      // front points to the front element in the Queue (if any)
    int rear;       // rear points to the last element in the Queue
    int count;      // current size of the Queue

public:
    Queue(int size = SIZE);     // constructor

    void dequeue();
    void enqueue(T item);
    T peek();
    int size();
    bool isEmpty();
    bool isFull();
};

template <class X>
Queue<X>::Queue(int size)
{
    arr = new X[size];
    capacity = size;
    front = 0;
    rear = -1;
    count = 0;
}

template <class X>
void Queue<X>::dequeue()
{
    if (isEmpty())
    {
        std::cout << "Underflow\nProgram Terminated\n";
        exit(EXIT_FAILURE);
    }

    front = (front + 1) % capacity;
    count--;
}

template <class X>
void Queue<X>::enqueue(X item)
{
    if (isFull())
    {
        std::cout << "Overflow\nProgram Terminated\n";
        exit(EXIT_FAILURE);
    }

    rear = (rear + 1) % capacity;
    arr[rear] = item;
    count++;
}

template <class X>
X Queue<X>::peek()
{
    if (isEmpty())
    {
        std::cout << "UnderFlow\nProgram Terminated\n";
        exit(EXIT_FAILURE);
    }
    return arr[front];
}

template <class X>
int Queue<X>::size() {
    return count;
}

template <class X>
bool Queue<X>::isEmpty() {
    return (size() == 0);
}

template <class X>
bool Queue<X>::isFull() {
    return (size() == capacity);
}