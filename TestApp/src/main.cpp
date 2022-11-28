#include <time.h>
#include "Figure.h"
#include "Circle.h"
#include "Queue.h"
#include "Pentagon.h"

void printFigures()
{
	Queue<Figure*> queue(100);
	for (size_t i = 0; i < 100; i++)
	{
		int result = rand() % 100;
		if (result % 2 == 0)
		{
			int x = rand() % 100;
			int y = rand() % 100;
			int width = rand() % 100;
			int height = rand() % 100;
			Figure* pentagon = new Pentagon(x, y, width, height);
			queue.enqueue(pentagon);
		}
		else
		{
			int x = rand() % 100;
			int y = rand() % 100;
			int r = rand() % 100;
			Figure* circle = new Circle(x, y, r);
			queue.enqueue(circle);
		}

		for (size_t i = 0; i < queue.size(); i++)
		{
			Figure* figure = queue.peek();
			queue.dequeue();
			figure->printAsJSON();
			delete figure;
		}
	}
}

int main(int argc, char* argv[])
{
	srand(time(NULL));

	printFigures();

	return 0;
}
