#include "pch.h"
#include "Queue.h"

Queue::Queue(int size)
{
    _array = new int[size];
    _capacity = size;
    _front = 0;
    _rear = -1;
    _count = 0;
}

Queue::~Queue()
{
    delete()
}

int Queue::dequeue()
{
}

void Queue::enqueue(int x)
{
}

int Queue::peek()
{
}

int Queue::size()
{
}

bool Queue::isEmpty()
{
}

bool Queue::isFull()
{
}
