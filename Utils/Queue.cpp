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
	delete[] _array;
}

int Queue::dequeue()
{
    if (isEmpty())
    {
	    std::cout << "Underflow\nProgram Terminated\n";
        exit(EXIT_FAILURE);
    }

    int x = _array[_front];
    std::cout << "Removing " << x << std::endl;

    _front = (_front + 1) % _capacity;
    _count--;

    return x;
}

void Queue::enqueue(int item)
{
    if (isFull())
    {
	    std::cout << "Overflow\nProgram Terminated\n";
        exit(EXIT_FAILURE);
    }

    std::cout << "Inserting " << item << std::endl;

    _rear = (_rear + 1) % _capacity;
    _array[_rear] = item;
    _count++;
}

int Queue::peek()
{
    if (isEmpty())
    {
	    std::cout << "Underflow\nProgram Terminated\n";
        exit(EXIT_FAILURE);
    }
    return _array[_front];
}

int Queue::size()
{
    return _count;
}

bool Queue::isEmpty()
{
    return (size() == 0);
}

bool Queue::isFull()
{
    return (size() == _capacity);
}
