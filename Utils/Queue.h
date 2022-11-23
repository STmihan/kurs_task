#pragma once
#include <iostream>
#include <cstdlib>

#define DEFAULT_QUEUE_SIZE 1000

class Queue
{
private:
    int* _array;
    int _capacity;
    int _front;
    int _rear;
    int _count;

public:
    Queue(int size = DEFAULT_QUEUE_SIZE);
    ~Queue();

    int dequeue();
    void enqueue(int x);
    int peek();
    int size();
    bool isEmpty();
    bool isFull();
};

