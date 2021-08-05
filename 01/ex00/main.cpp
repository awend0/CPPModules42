#include "Pony.hpp"

void ponyOnTheStack(void)
{
	Pony pony("StackPony", "red");

	pony.talk();
}

void ponyOnTheHeap(void)
{
	Pony *pony = new Pony("HeapPony", "blue");

	pony->talk();
	delete (pony);
}

int    main(void)
{
	std::cout << "Now we're going to create Stack Pony" << std::endl;
	ponyOnTheStack();
	std::cout << "And now, Heap Pony:" << std::endl;
	ponyOnTheHeap();
	std::cout << "Done!" << std::endl;
}